//类模板成员函数类外(implemented)实现
//学习目标:能够掌握类模板中的成员函数类外实现

#include<bits/stdc++.h>
using namespace std;

//类模板成员函数类外实现
template<class T1 , class T2>
class Person
{
public:
    //类模板成员函数类  内  实现
    // Person(T1 name , T2 age) : P_Name(name) , P_Age(age)
    // {
    //     ;
    // }
    
    //类模板成员函数类  外  实现
    Person(T1 name , T2 age);

    //类模板成员函数类  内  实现
    // void ShowPerson()
    // {
    //     cout << "姓名: " << this->P_Name << "年龄: " << this->P_Age << endl;
    // }

    //类模板成员函数类  外  实现
    void ShowPerson();

public:
    T1 P_Name;
    T2 P_Age;
};
//类模板成员函数类  外  实现
    //构造函数类外实现:
template<class T1 , class T2>
Person<T1 , T2>::Person(T1 name , T2 age)
{
    this->P_Age = age;
    this->P_Name = name;
}

    //成员函数类外实现:
template<class T1 , class T2>
void Person<T1 , T2>::ShowPerson()
{
    cout << "姓名: " << this->P_Name  << endl << "年龄: " << this->P_Age << endl;
}

void test01()
{
    Person<string , int> p("Tom" , 12);
    p.ShowPerson();
}

int main()
{
    test01();
    return 0;
}