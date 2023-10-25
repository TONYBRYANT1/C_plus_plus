#include<bits/stdc++.h>
using namespace std;

//栈区:
//不要返回局部变量的地址
// int * func()
// {
//     int a=0;
//     return &a;//(X)
// }

//堆区:
//C++中主要利用new在堆区开辟内存
// int * func()
// {
//     int *  p=new int(10);
//     return p;
// }
int main()
{
    //C++在执行的时候,会将内存大方向划分为4个区域:1.代码区/2.全局区/3.栈区/4.堆区
//程序运行前:
    //代码区:
    //1.cpu执行的机器指令
    //2.共享的
    //3.只读

    //全局区:
    //1.全局变量
    //2.静态变量
    //3.常量(1.字符串常量 2.const修饰的全局变量(全局常量))


//程序运行后:
    //栈区:由编译器自动分配释放
    //1.形参
    //2.局部变量
    //3.不要返回局部变量的地址
    // int *p=func();
    // cout << *p << endl;
    // cout << *p << endl;

    //堆区:有程序员分配释放,若程序员不是放,程序结束时由操作系统回收
    //C++中主要利用new在堆区开辟内存
    // int *p=func();
    // cout << *p << endl;
    // cout << *p << endl;

//new操作符
//1.new的基本语法
    // int *p=new int(10);//在堆区开辟一个值为10的int型变量,并用p指针指向
    // cout << *p << endl;//10
    // delete p;//同过指针p将其在堆区所指的int型变量销毁
    // cout << *p << endl;//乱码
//2.在堆区利用new开辟数组
    // int * arr=new int[10];
    // for(int i=0;i<10;i++)
    // {
    //     arr[i]=i+100;
    // }
    // for(int i=0;i<10;i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // delete[] arr;//释放堆区数组
    system("pause");
    return 0;
}