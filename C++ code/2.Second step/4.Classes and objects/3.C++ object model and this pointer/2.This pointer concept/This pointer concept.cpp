//this指针
//每个非静态成员函数只会诞生一份函数实例,也就是说多个同类型的对象会共用同一块代码
//这一块代码是如何区分哪个对象调用自己的呢？
//=========> this 指针
//1.this指针指向被调用的成员函数所属的对象
//2.this指针是隐含在每一个非静态成员函数内的一种指针
//3.this指针不需要定义,直接使用即可

//this指针的用途
//1.当形参和成员变量同名时,可用this指针来区分
//2.在类的非静态成员函数中返回对象本身,可使用return *this  
#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    Person(int age)//如果形参和成员变量名同时,会把形参和成员变量混为一谈
                   //这时候加一个this可以this->age,来标注成员变量
    {
        //1.this指针指向 被调用的成员函数 所属的对象
        this->age=age;
    }

    //如果函数的返回类型是Person,则返回的不是p,而是p的一份拷贝
    //如果函数的返回类型是Person&,则返回的就是p对象本身
    Person& PersonAddAge(Person &p)//Person& temp = *this =p3
    {
        this->age +=p.age;
        //this是指向p3的指针,而*this就是p3这个对象本体
        return *this;
    }
public:
    int age;
};
//1.解决名称冲突
void test01()
{
    Person p1(18);
    cout << "p1的年龄为:" << p1.age << endl;
}
void test02()
{
    Person p2(10);
    Person p3(10);
    p3.PersonAddAge(p2);
    //链式编程思想
    p3.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
    //1.如果PersonAddAge的返回类型是Person&,则返回的是p2本身
    //p3.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2)
//<==>p3年龄加了一遍后,p3.PersonAddAge(p2).PersonAddAge(p2)
//<==>p3年龄加了两遍后,p3.PersonAddAge(p2)
//<==>p3年龄加了三遍
    //2.如果PersonAddAge的返回类型是Person,则返回的是p3的一份拷贝
    //p3.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2)
//<==>p3年龄加了一遍后,p3.1.PersonAddAge(p2).PersonAddAge(p2)
//<==>p3年龄加了一遍后,p3.1的年龄加了一遍后,p3.2.PersonAddAge(p2)
//<==>p3年龄加了一遍后,p3.1的年龄加了一遍后,p3.2的年龄加了一遍
    cout << "p3的年龄为:" << p3.age << endl;
}
int main()
{
    //test01();
    test02();
    return 0;
}
