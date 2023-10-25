//继承同名成成员处理方式
//问题:当子类与父类出现同名的成员,如何通过子类对象,访问到子类或是父类中同名的数据呢？
//答案:
//1.访问子类同名成员    直接访问即可  --->  s.T_a;
//2.访问父类同名成员    需要加作用域  --->  s.Father::T_a;

//1.当父类和子类没有同名的成员时:子类对象可以直接访问父类的成员
//eg1:Father有void func(),而Son没有void fun()时:子类对象直接进行访问父类的成员函数:s.func()
//eg2:Father有T_a,而Son没有T_a时:子类对象直接进行访问父类的成员变量:s.T_a
//2.当父类和子类有同名的成员时:子类的同名成员会隐藏掉父类中所有同名成员,如果想要访问到父类中被隐藏的同名成员,需要加作用域
//eg1:Father有void func(),Son也有void func()时:子类对象加作用域才能访问到父类的func():s.Father::func()
//eg1:Father有T_a,Son也有T_a时:子类对象加作用域才能访问到父类的T_a:s.Father::T_a
#include<bits/stdc++.h>
using namespace std;

class Father
{
public:
    Father()
    {
        T_a = 100;//同名成员属性
    }
    
    void func()
    {
        cout << "Father——————func()调用" << endl;
    }

    void func(int a)
    {
        cout << "Father——————func(int a)调用" << endl;
    }

public:
    int T_a;//同名成员属性
};

class Son : public Father
{
public:
    Son()
    {
        T_a = 200;//同名成员属性
    }

    void func()
    {
        cout << "Son——————func()调用" << endl;
    } 

public:
    int T_a;//同名成员属性
};

//同名成员属性的处理方式
void test01()
{
    Son s1;
    cout << "s1.T_a = " << s1.T_a << endl;
    //如果通过子类对象,访问到父类中的同名成员,需要加作用域
    cout << "s1.Father::T_a = " << s1.Father::T_a << endl;
}

//同名成员函数的处理方式
void test02()
{
    Son s2;
    s2.func();
    s2.Father::func();
    s2.Father::func(100);
    //1.当父类和子类没有同名的成员时:子类对象可以直接访问父类的成员
    //eg1:Father有void func(),而Son没有void fun()时:子类对象直接进行访问父类的成员函数:s.func()
    //eg2:Father有T_a,而Son没有T_a时:子类对象直接进行访问父类的成员变量:s.T_a
    //2.当父类和子类有同名的成员时:子类的同名成员会隐藏掉父类中所有同名成员,如果想要访问到父类中被隐藏的同名成员,需要加作用域
    //eg1:Father有void func(),Son也有void func()时:子类对象加作用域才能访问到父类的func():s.Father::func()
    //eg1:Father有T_a,Son也有T_a时:子类对象加作用域才能访问到父类的T_a:s.Father::T_a
}

int main()
{
    test01();
    test02();
    return 0;
}