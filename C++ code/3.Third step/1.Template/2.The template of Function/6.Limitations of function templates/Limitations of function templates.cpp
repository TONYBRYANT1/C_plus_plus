//函数模版的局限性
//局限性:函数模版不是万能的,有些特定的数据类型,需要用具体化的方式做特殊实现

//总结:
//1.利用具体化的模版,可以解决自定义类型的通用化
//2.学习模版并不是为了写模版,而是STL能够运用系统提供的模版
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    Person(string name , int age) : P_name(name) , P_age(age)
    {
        ;
    }
public:
    string P_name;
    int P_age;
};


//对比两个数据是否相等的函数模版
template<typename T>
bool myCompare(T& a , T& b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//普通类型调用函数模版
void test01()
{
    int a = 0;
    int b = 0;

    bool ret = myCompare(a,b);

    if(ret)
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" << endl;
    }
}

//自定义类型调用函数模版
//解决方法:
//1.运算符重载
//2.提供具体自定义类型的函数模版版本(专精函数模版)
template<> bool myCompare(Person& p1 , Person& p2)
{
    if(p1.P_name == p2.P_name && p1.P_age == p2.P_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test02()
{
    Person p1("Tom",10);
    Person p2("Tom",18);

    bool ret = myCompare(p1,p2);

    if(ret)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }
}

int main()
{
    //test01();
    test02();
    return 0;
}