#pragma once
#include<bits/stdc++.h>
using namespace std;

template<class T1 , class T2>
class Person
{
public:
    Person(T1 name , T2 age);
    void ShowPerson();
private:
    string P_Name;
    int P_Age;
};

template<class T1 , class T2>
Person<T1 , T2>::Person(T1 name , T2 age)
{   
    this->P_Name = name;
    this->P_Age = age;
}

template<class T1 , class T2>
void Person<T1 , T2>::ShowPerson()
{
    cout << "姓名: " << this->P_Name << endl;
    cout << "年龄: " << this->P_Age << endl;
}
