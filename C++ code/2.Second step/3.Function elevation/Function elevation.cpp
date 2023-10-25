#include<bits/stdc++.h>
using namespace std;

//1.函数的默认参数
//如果我们自己传入数据,就用自己的数据,如果没有,那么就用默认值
//注意事项:
    //1.如果某个位置已经有了默认参数,那么从这个位置往后,从左到右都必须有默认值,前面无所谓
    //2.如果函数声明有默认参数，函数实现就不能有默认参数(函数的声明和实现只能有一个处有默认参数)
// int func(int a,int b = 20,int c = 30)
// {
//     return a+b+c;
// }

//2.函数占位参数
//目前阶段的占位参数我们还用不到,后面课程中会用到
// void func(int a,int)//其中数据类型(int)是占位参数
// {
//     //占位参数可以有默认参数,即func(int a,int = 10)
//     //调用时只用输入func(10)就够了
//     cout << "this is func" << endl;
// }

//3.函数重载(条件)
//作用域:全局
//函数名相同:func
//函数参数类型不同/个数不同/顺序不同
// void func()
// {
//     cout << "func 的调用" << endl;
// }
// void func(int a)
// {
//     cout << "func(int a) 的调用" << endl;
// }
// void func(double a)
// {
//     cout << "func(double a) 的调用" << endl;
// }
// void func(int a,double b)
// {
//     cout << "func(int a,double b) 的调用" << endl;
// }
// void func(double a,int b)
// {
//     cout << "func(double a,int b) 的调用" << endl;
// }

//4.函数重载的注意事项
    //1.引用作为重载的条件
void func(int &a)
{
    //因为int a是可读可写的栈区变量,所以func(a)可以调用此函数
    cout << "func(int &a) 的调用" << endl;
}
void func(const int &a)
{
    //因为const int &a = 10 <==> int temp =10 , const int * const p = &temp,所以可行
    cout << "func(const int &a) 的调用" << endl;
}
    //2.函数重载碰到默认参数
//当函数重载碰到默认参数,出现二义性,报错,尽量避免这种情况
// void func2(int a,int b =10)
// {
//     cout << "func2(int a) 的调用" << endl;
// }
// void func2(int a)
// {
//     cout << "func2(int a) 的调用" << endl;
// }
int main()
{
//1.函数的默认参数:在C++中,函数的形参列表中的形参是可以有默认值的
    // cout << func(10) << endl;
    
//2.函数占位参数
    // func(10,10);

//3.函数重载:函数名可以相同,提高复用性
//条件:(1.同一个作用域下 2.函数名称相同 3.函数参数类型不同/个数不同/顺序不同)
//注意:函数的返回值不可以作为函数重载的条件(仅仅是返回值类型不同的两个函数不能重载)
// void func(double a,int b)
// {
//     cout << "func(double a,int b) 的调用" << endl;
// }
// int  func(double a,int b)
// {
//     cout << "func(double a,int b) 的调用" << endl;
// }
//cannot overload functions distinguished by return type alone
    // func();
    // func(10);
    // func(10.0);
    // func(10,10.0);
    // func(10.0,10);
//4.函数重载的注意事项
    //1.引用作为重载的条件
    int a=0;
    func(a);
    func(10);
    func2(10);//当函数重载碰到默认参数,出现二义性,报错,尽量避免这种情况
    //2.函数重载碰到默认参数

// //system("pause");
    // return 0;
}