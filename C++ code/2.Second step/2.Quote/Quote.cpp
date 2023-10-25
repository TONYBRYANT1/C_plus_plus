#include<bits/stdc++.h>
using namespace std;

//交换函数
//1.地址传递
// void Swap1(int *p,int* q)
// {
//     int temp=*p;
//     *p=*q;
//     *q=temp;
// }
//2.引用传递
// void Swap2(int& a,int& b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

//不要返回函数内局部变量的地址作为引用,当函数结束时局部变量的地址被替代了
// int& Test01()
// {
//     int a=0;//a在栈区,生命周期为函数的生命周期
//     return a;
// }
// int& Test02()
// {
//     static int a=10;//a在全局区,数据在程序运行完成之后,由系统释放
//     return a;
// }

//4.引用的本质
//发现是引用,转化为 int*const ref = &a;
// void func(int& ref)
// {
//     ref=100;// ref是引用,转换为*ref = 100
// }

//5.打印数据函数
//加const防止误操作
// void ShowValue(const int& val)//为了不通过val来改变a的值,所以加const
// {
//     cout << "val = " << val << endl;
// }
int main() 
{
//引用:给变量起别名
    // int a=10;
    // int& b=a;

//1.引用必须初始化,且初始化之后不可以改变
    //int& b=a <==> int * const b = &a

//2.地址传递和引用传递
//引用更加简化,更加简洁
    // int a=10;
    // int b=20;
    // cout << a << endl;
    // cout << b << endl;
    // Swap1(&a,&b);
    // cout << a << endl;
    // cout << b << endl;
    // Swap2(a,b);
    // cout << a << endl;
    // cout << b << endl;

//3.引用做函数的返回值
//不要返回函数内局部变量的地址作为引用,当函数结束时局部变量的地址被替代了
    // int& ref1 = Test01();//(X)
    // cout << ref1 << endl;//Trst01()的返回值a由于在栈区,函数执行完,a也被销毁了
    // int& ref2=Test02();
    // cout << ref2 << endl;
    // cout << ref2 << endl;
//函数的调用可以作为左值
    // Test02()=1000;
    // cout << ref2 << endl;
    // cout << ref2 << endl;
//4.引用的本质量:本质在C++内部实现是一个指针常
//C++推荐用引用技术,因为语法方便,引用本质是指针常量,但是所有的指针操作编译器都帮我们做了
    // int a=0;
    // //自动转化为 int* const ref = &a; 指针常量是指针指向不可以改变,也说明为什么引用不可以更改
    // int& ref=a;
    // ref=20;//内部发现ref是引用，自动帮我们转化为:*ref = 20;

    // cout << "a:" << a << endl;
    // cout << "ref:" << ref << endl;

    // func(a);
//5.C++中的引用-常量引用
//常量引用主要用来修饰形参,防止误操作(const)
//     int a=0;
//   //int& ref = 10;//10是一个常量,且引用本身需要一个合法的内存空间(栈/堆区),因此这行错误
//     const int& ref =20;
//     加上const之后,编译器将代码修改 int temp = 10; const int& ref = temp <==> const int * ref = &temp ;
    
    // int a =100;
    // ShowValue(a);
    //system("pause");
    // return 0;
}