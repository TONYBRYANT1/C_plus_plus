//类对象作为类成员:先构造本类成员(手机),再构造本类对象(人)   2.先析构本类对象(人),再析构本类成员(手机)
//类对象作为类成员时的构造顺序:当其他类对象(Phone H_Name)作为本类成员,构造时先构造本类成员(Phone H_Name),再构造本类对象(Person P_Name)
//类对象作为类成员时的析构顺序:当其他类对象(Phone H_Name)作为本类成员,析构时先析构本类对象(Person P_Name),再析构本类成员(Phoen H_Name)
#include<bits/stdc++.h>

using namespace std;

class Phone
{
public:
    Phone(string h_name)
    {
        h_Name = h_name;
        cout << "Phone的构造函数调用" << endl;
    }
    ~Phone()
    {
        cout << "Phone的析构函数调用" << endl;
    }
public:
    string h_Name;
};

class Person
{
public:
    //H_Name(h_name) <==> Phone H_Name = h_name,调用Phone类的构造函数
    Person(string p_name , string h_name) : P_Name(p_name),H_Name(h_name)
    {
        cout << "Person的构造函数调用" << endl;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
public:
    string P_Name;
    Phone H_Name;
};

//类对象作为类成员时的构造顺序:当其他类对象(Phone H_Name)作为本类成员,构造时先构造本类成员(Phone H_Name),再构造本类对象(Person P_Name)
//类对象作为类成员时的析构顺序:当其他类对象(Phone H_Name)作为本类成员,析构时先析构本类对象(Person P_Name),再析构本类成员(Phoen H_Name)
void test01()
{
    Person p("TonyBryant","iphone 12");
    cout << p.P_Name << " 拿着 " << p.H_Name.h_Name << endl;
}

int main()
{
    test01();
    return 0;
}