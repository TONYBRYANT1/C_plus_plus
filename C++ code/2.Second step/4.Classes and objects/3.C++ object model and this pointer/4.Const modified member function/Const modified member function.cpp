//const修饰的成员函数
//1.常函数:
// 成员函数后加const后我们称为这个函数为常函数
// 常函数内不可以修改成员属性
// 成员属性声明时加关键字mutable后,在常函数中依然可以修改
//2.常对象:
// 声明对象前加const称该对象为常对象
// 常对象只能调用常函数、
#include<bits/stdc++.h>
using namespace std;

//常函数
class Person
{
public:
    //使用常对象,编译器不会提供默认构造函数 (因为“规定”:const的时候,是不会调系统自动生成的默认构造函数的)
    Person()
    {
        ;
    }
    //常函数: 
    //this指针的本质 是指针常量(Type* const this) 指针的指向是不可以修改的
    //void ShowPerson() const 中的 const 修饰了this 指针
    //相当于更改了this指针的类型 (Type* const this)--->(const Type* const this) 使this指针 1.不能改变指针指向的对象 2.不能改变指向对象的值
    void ShowPerson() const
    {
        //P_A = 100;//常函数中this指针不能改变指向对象的值
        P_B = 100;//常函数中this指针不能改变指向对象的值 , 除了mutable(adj.可变的，易变的；反复无常的，用情不专的)修饰的成员变量
        //this = NULL;//常函数中this指针不能改变指针指向的对象
    }
    void Func()
    {
        cout << "普通函数的调用" << endl;
    }
public:
    int P_A;
    mutable int P_B;
};
//常对象
void test01()
{
    const Person p;
    //p.P_A = 100;//用const修饰的常对象不可以改变其成员变量
    p.P_B = 100;//用const修饰的常对象不可以改变其成员变量,除了被mutable修饰
    //常对象只能调用常函数:常对象本来就是不能修改对象的成员变量,用非常函数可能修改其成员变量的值,用常函数可以确保不会改变成员变量的值
    p.ShowPerson();
    //p.Func();
}


int main()
{
    test01();
    return 0;
}
