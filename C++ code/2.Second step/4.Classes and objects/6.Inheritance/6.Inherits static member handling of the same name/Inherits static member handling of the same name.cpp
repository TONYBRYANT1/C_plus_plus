//继承同名静态成员处理方式
//问题:继承中同名的静态成员在子类对象上如何进行访问？
//静态成员和非静态成员出现同名,处理方式一致
//1.访问子类同名成员 直接访问即可
//2.访问父类同名成员 需要加作用域

//子类出现和父类同名静态成员函数,也会隐藏父类中所有的同名静态成员函数
//如果想访问父类中被隐藏的同名静态函数,需要加作用域
//当出现静态成员变量时与上述方法一致

//总结:同名静态成员处理方式和非静态处理方式一样,只不过有两中访问方式(1.通过对象 2.通过类名)
#include<bits/stdc++.h>
using namespace std;
class Father
{
public:
    static void func()
    {
       cout << "Father——————func()调用" << endl;
    }
public:
    static int T_a; 
};
int Father::T_a = 100;

class Son : public Father
{
public:
    static void func()
    {
       cout << "Son——————func()调用" << endl;
    }
public:
    static int T_a;
};
int Son::T_a = 200;

//同名静态成员属性
void test01()
{
    //1.通过对象访问静态变量
    cout << "通过对象访问静态变量:" << endl;
    Son s1;
    cout << "Son——————T_a = " << s1.T_a << endl;
    cout << "Father——————T_a = " << s1.Father::T_a << endl;

    //2.通过类名访问静态变量
    cout << "通过类名访问静态变量:" << endl;
    cout << "Son——————T_a = " << Son::T_a << endl;
    cout << "Father——————T_a = " << Father::T_a << endl;
    //第一个'::' 表示通过类名访问    第二个'::' 表示父类作用域下
    cout << "Father——————T_a = " << Son::Father::T_a << endl;

}

//同名的静态成员函数
void test02()
{
    //1.通过对象访问静态函数
    cout << "通过对象访问静态函数:" << endl;
    Son s2;
    s2.func();
    s2.Father::func();

    //2.通过类名访问静态函数
    cout << "通过类名访问静态函数:" << endl;
    Son::func();
    Father::func();
    //第一个'::' 表示通过类名访问    第二个'::' 表示父类作用域下
    Son::Father::func();
}

int main()
{
    //test01();
    test02();
    return 0;
}