//类模板的对象做函数参数
//学习目标:
//类模板实例化出的对象 , 向函数传参的方式

//一共有三种传入方式:
//1.指定传入的类型 --- 直接显示对象的数据类型(比较好用)
//2.参数模板化     --- 将对象中的参数变为模板进行传递
//3.整个类模板化   --- 将这个对象类型 模板化 进行传递

//总结:通过类模板创建的对象,可以有三种方式进行传参
//2.使用比较广泛的是第一种 : 指定传入的类型
#include<bits/stdc++.h>
#include<typeinfo.h>
using namespace std;

template<class T1 , class T2>
class Person
{
public:
    Person(T1 name , T2 age) : P_Name(name) , P_Age(age)
    {
        ;
    }

    void ShowPerson()
    {
        cout << "name : " << this->P_Name << endl;
        cout << " age : " << this->P_Age  << endl;
    }
public:
    T1 P_Name;
    T2 P_Age;
};

//1.指定传入的类型 --- 直接显示对象的数据类型
void PrintPerson1(Person<string , int>& p)       //------------->最为常用
{
    p.ShowPerson();
    cout << endl;
}

void test01()
{
    Person<string , int> p1("孙悟空" , 999);
    PrintPerson1(p1);
}

//2.参数模板化 --- 将对象中的参数变为模板进行传递
template<class T1 , class T2>
void PrintPerson2(Person<T1 , T2>& p)       //------------->函数模板配合类模版
{
    p.ShowPerson(); 
    cout << "T1 的类型为: " << typeid(T1).name() << endl;
    cout << "T2 的类型为: " << typeid(T2).name() << endl;
    cout << endl;
}
void test02()
{
    Person<string , int> p2("猪八戒" , 1000);
    PrintPerson2(p2);
   
}

//3.整个类模板化 --- 将这个对象类型 模板化 进行传递
template<class T3>
void PrintPerson3(T3 &p)        //------------->函数模板配合类模版
{
    p.ShowPerson();
    cout << "T3 的类型为: " << typeid(T3).name() << endl; 
}

void test03()
{
    Person<string , int> p3("唐僧" , 3000);
    PrintPerson3(p3);
}


int main()
{
    test01();
    test02();
    test03();
    return 0;
}