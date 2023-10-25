//类模版与函数模版的区别
//类模版与函数模版区别主要有两点:
//1.类模版没有自动类型推导的使用方式
//2.类模版在模版参数列表中可以有默认参数

#include<bits/stdc++.h>
using namespace std;

//类模版与函数模版的区别
template<class NameType , class AgeType>//模版参数列表
//类模版的参数列表可以有默认参数,而函数模版不能有默认参数
class Person
{
public:
    Person(NameType name , AgeType age) : P_name(name) , P_age(age)
    {
        ;
    }

    void ShowPerson()
    {
        cout << "name : " << this->P_name << endl;
        cout << " age : " << this->P_age  << endl;
    }
public:
    NameType P_name;
    AgeType P_age;
};

//1.类模版没有自动类型推导的使用方式
void test01()
{
    //1.类模版没有自动类型推导的使用方式
    //(X) Person p1("孙悟空" , 999);//argument list for class template "Person" is missing
    
    //必须要显示指定类型,才能通过类模版来实例化对象
    Person<string , int> p1("孙悟空" , 999);
    p1.ShowPerson();
}

//2.类模版在模版参数列表中可以有默认参数
void test02()
{
    Person<string , int> p2("猪八戒" , 999);
    p2.ShowPerson();
    //类模版的参数列表可以有默认参数,而函数模版不能有默认参数
    //可以将template<class TypeName , class TypeAge>
    //改为 :template<class TypeName , class TypeAge = int>
    //那么用类模版来实例化对象可以写成:
    //Person<string> p2("猪八戒" , 999);
}

int main()
{
    test01();
    test02();
    return 0;
}