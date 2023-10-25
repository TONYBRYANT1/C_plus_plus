//普通函数与函数模版的区别
//区别:
//1.普通函数调用时可以发生自动类型转换(隐式类型转换)
//2.函数模版 如果利用自动类型推导,不会发生隐式类型转换
//3.函数模版 如果利用显示指定类型的方式,可以发生隐式类型转换

#include<bits/stdc++.h>
using namespace std;

//1.普通函数调用时可以发生自动类型转换(隐式类型转换)
//普通函数:
int myAdd1(int a , int b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << myAdd1(a,b) << endl;
    //1.普通函数调用时可以发生自动类型转换(隐式类型转换)
    cout << myAdd1(a,c) << endl; // a - 97   c - 99
    //普通函数将c进行隐式类型转换

}

template<typename T>
T myAdd2(T a , T b)
{
    return a+b;
    
}

//2.函数模版 如果利用自动类型推导,不会发生隐式类型转换
//3.函数模版 如果利用显示指定类型的方式,可以发生隐式类型转换
void test02()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    //显示指定类型
    cout << myAdd2(a,b) << endl; //函数模板的自动类型推导

    //2.函数模版 如果利用自动类型推导,不会发生隐式类型转换
    //cout << myAdd2(a,c) << endl; //No instance(实例) of function template "myAdd2" matches the argument list(参数列表)
   
    //3.函数模版 如果利用显示指定类型的方式,可以发生隐式类型转换
    cout << myAdd2<int>(a,c) << endl;
}

int main()
{
    test01();
    return 0;
}