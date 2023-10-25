//类模板和友元
//学习目标:
    //掌握类模板配合友元函数的类内和类外实现

//全局函数类内实现 --- 直接在类内声明友元即可
//全集函数类外实现 --- 需要提前让编译器知道全局函数的存在

//总结:
//1.当全局函数做友元在类内实现时,比较方便,直接加friend就可以
//2.当全局函数做友元在类内声明,类外实现时,有些麻烦:
  //1.要在类声明时要在函数名后加上空模板的参数列表<>
  //2.类外实现时要加模板声明template<class T1 , class T2> , 而且为了让编译器感测到 , 还要在类模板实现前实现 
  //3.最后要在全局函数做友元类外实现前加上类模板的声明
#include<bits/stdc++.h>
using namespace std;
//类模板声明
template<class T1 , class T2>
class Person;

//2.全局函数做友元 类外实现
template<class T1 , class T2>
void PrintPerson2(Person<T1 , T2> p)
{
    cout << "姓名: " << p.P_Name << endl;
    cout << "年龄: " << p.P_Age << endl;
}

template<class T1 , class T2>
class Person
{
    //1.全局函数做友元 类内实现
    // friend void PrintPerson1(Person<T1 , T2> p)
    // {
    //     cout << "姓名: " << p.P_Name << endl;
    //     cout << "年龄: " << p.P_Age << endl;
    // }

    //2.全局函数做友元 类外实现
    //因为类外实现的全局函数变成了函数模版,所以类内声明时要加上空模板的参数列表
    friend void PrintPerson2<>(Person<T1 , T2> p);
public:
    Person(T1 name , T2 age)
    {   
        this->P_Name = name;
        this->P_Age = age;
    }
private:
    T1 P_Name;
    T2 P_Age;
};


//1.全局函数做友元 在类内实现
// void test01()
// {
//     Person<string , int> p("Tom" , 18);
//     PrintPerson1(p);
// }

//2.全局函数做友元 在类外实现
void test02()
{
    Person<string , int> p("Jerry" , 10);
    PrintPerson2(p);
}

int main()
{
    //test01();
    test02();
    return 0;
}