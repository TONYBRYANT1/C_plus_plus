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