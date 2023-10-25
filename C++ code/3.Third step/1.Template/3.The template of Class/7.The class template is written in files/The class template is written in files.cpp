//类模板分文件编写

//学习目标:
    //掌握类模板成员函数份文件编写产生的问题 以及解决方式

//问题:
    //类模板中成员函数创建时机是在调用阶段,导致分文件编写时链接不到

//解决:
//解决方式1:直接包含.cpp源文件
//解决方式2:将声明和实现写到同一个文件中,并更改后缀名为.hpp (.hpp是约定的名称,并不是强制)


//类模板分文件编写时的问题以及解决办法
#include<bits/stdc++.h>
using namespace std;

//问题:直接包含Person.h文件看不到Person.cpp文件 , 使测试程序看不到Person类中的函数实现

//解决办法1:直接包含Person.cpp文件
//#include"Person.cpp"

//解决办法2:将 Person.h 和 Person.cpp 中的内容写到一起 , 将后缀名改为.hpp文件(约定.hpp为类模板后缀名)
#include"Person.hpp"

//类模板类内声明:

// template<class T1 , class T2>
// class Person
// {
// public:
//     Person(T1 name , T2 age);
//     void ShowPerson();
// private:
//     string P_Name;
//     int P_Age;
// };

//类模板类外实现:

// template<class T1 , class T2>
// Person<T1 , T2>::Person(T1 name , T2 age)
// {   
//     this->P_Name = name;
//     this->P_Age = age;
// }

// template<class T1 , class T2>
// void Person<T1 , T2>::ShowPerson()
// {
//     cout << "姓名: " << this->P_Name << endl;
//     cout << "年龄: " << this->P_Age << endl;
// }

void test01()
{
    Person<string , int> p("Jerry" , 18);
    p.ShowPerson();
}

int main()
{
    test01();
    return 0;
}