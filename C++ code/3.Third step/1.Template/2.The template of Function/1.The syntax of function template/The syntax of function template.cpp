//函数模版

//C++另一种编程思想称为泛型编程 , 主要利用的技术就是模版
//C++提供两种模版机制 : 函数模版和类模版

//函数模版语法:
//函数模版作用:
    //建立一个通用函数 , 其函数返回值类型和形参类型可以不具体定制 , 用一个虚拟的类型来代表

//语法:
    //template<typename T>
    //函数声明定义

//解释:
    //template(关键字) : 声明创建模版
    //typename(关键字) : 表明其后面的符号是一种数据类型 , 可以用class代替
    //        T        : 通用的数据类型 , 名称可以替换 , 通常为大写字母

#include<bits/stdc++.h>
using namespace std;

//交换两个整型的函数
void swapInt(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//交换两个浮点型的函数
void swapDouble (double &a , double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

//普通函数测试
void test01()
{
    int a=10;
    int b=20;
    swapInt(a,b);
    cout << "a: " << a << endl << "b: " << b << endl;

    double c=10.1;
    double d=20.1;
    swapDouble(c,d);
    cout << "c: " << c << endl << "d: " << d << endl;
}

//函数模版:
template<typename T> //声明一个模版 , 告诉编译器后面代码中紧跟着的T不要报错 , T是一个通用数据类型
void mySwap( T& a , T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

//函数模版测试
void test02()
{
    int a = 10;
    int b = 20;
    //利用函数模版进行交换
    //1.自动类型推到(编译器自动推导类型)
    mySwap(a , b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //2.显示指定类型
    mySwap<int>(a , b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    //test01();
    test02();
    return 0;
}