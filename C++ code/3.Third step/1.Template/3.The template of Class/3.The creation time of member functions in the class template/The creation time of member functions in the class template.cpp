//类模板中成员函数创建时机
//类模板中成员函数和普通类中的成员函数创建时机是有区别的:
//1.普通类中的成员函数一开始就可以创建
//2.类模版中的成员函数在调用时才创建



#include<bits/stdc++.h>
using namespace std;

class Person1
{
public:
    void ShowPerson1()
    {
        cout << "Show Person1" << endl; 
    }
};

class Person2
{
public:
    void ShowPerson2()
    {
        cout << "Show Person2" << endl; 
    }
};

template<class T>
class Myclass
{
public:

    //类模版中的成员函数
    void func1()
    {
        obj.ShowPerson1();
    }

    void func2()
    {
        obj.ShowPerson2();
    }
public:
    T obj;
};

void test01()
{
    //类模版中的成员函数在调用时才创建
    Myclass<Person1> c1;
    //c1.func1();
    //c1.func2();
}

int main()
{
    test01();
    return 0;
}