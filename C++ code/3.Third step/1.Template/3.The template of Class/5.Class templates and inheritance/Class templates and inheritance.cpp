//类模板与继承
//当类模版碰到继承时,需要注意一下几点:
//1.当子类继承的父类是一个类模板时,子类在声明的时候,要指定出父类中T的类型
//2.如果不指定,编译器无法给子类分配内存
//3.如果想灵活指定出父类中T的类型,子类也需变为类模版

#include<bits/stdc++.h>
using namespace std;

template<class T>
class Base
{
public:
    T m;
};

//1.当子类继承的父类是一个类模板时,子类在声明的时候,要指定出父类中T的类型
//class Son : public Base//错误,必须要知道父类中的T类型,才能继承给子类
class Son1 : public Base<int>
{

};

void test01()
{
    Son1  s1;
}

//3.如果想灵活指定出父类中T的类型,子类也需变为类模版
template<class T1 , class T2>
class Son2 : public Base<T2>
{
public:
    Son2()
    {
        cout << "T1的类型为: " << typeid(T1).name() << endl;
        cout << "T2的类型为: " << typeid(T2).name() << endl;
    }
public:
    T1 obj;
};

void test02()
{
    Son2<int , char> s2;
}


int main()
{
    //test01();
    test02();
    return 0;
}