//类模版语法
//类模版作用:
    //建立一个通用类,类中的成员 数据类型可以不具体定制,用一个虚拟的类型代表

//语法:
    //template<class T>
    //类

//解释:
//template --- 声明创建模版
//typename --- 表明其后面的符号是一种数据类型,可以用class替代
//    T    --- 通用的数据类型,名称可以替换,通常为大写字母

//总结:类模版和函数模版的语法相似,在声明模版template后面加类,此类称为类模版

#include<bits/stdc++.h>
using namespace std;

//类模版:
template<class NameType , class AgeType>
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

//通过类模版来实例化对象
//Person<> （<> --- 模版的参数列表）
void test01()
{
    Person<string , int> p1("孙悟空" , 999);
    p1.ShowPerson();
} 

int main()
{
    test01();
    return 0;
}