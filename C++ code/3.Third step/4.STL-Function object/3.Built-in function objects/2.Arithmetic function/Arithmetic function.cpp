// 算术仿函数

// 功能描述：
    // 实现四则运算
    // 其中 negate 是一元运算，其他都是二元运算

// 仿函数原型：
    // template<class T> T plus<T>                //加法仿函数
    // template<class T> T minus<T>               //减法仿函数
    // template<class T> T multiplies<T>          //乘法仿函数
    // template<class T> T divides<T>             //除法仿函数
    // template<class T> T modulus<T>             //取模仿函数
    // template<class T> T negate<T>              //取反仿函数


#include<bits/stdc++.h>
using namespace std;

//内建函数对象 算数仿函数

//negate 一元仿函数 取反仿函数
void test01()
{
    negate<int> n;
    cout << n(50) << endl;
}

//plus 二元仿函数 加法仿函数
void test02()
{
    plus<int> p;
    cout << p(10 , 20) << endl;
}
int main()
{
    test01();
    test02();   
    return 0;
}

