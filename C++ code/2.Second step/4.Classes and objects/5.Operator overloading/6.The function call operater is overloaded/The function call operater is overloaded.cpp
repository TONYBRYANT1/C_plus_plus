//函数调用运算符重载
//1.函数调用运算符()也可以重载
//2.由于重载后使用的方式非常像函数的调用,因此称为仿函数
//3.仿函数没有固定写法,非常灵活
#include<bits/stdc++.h>
using namespace std;

//打印输出类
class MyFunction
{
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
    int operator()(int a , int b)
    {
        return a+b;
    }
};

void myprint2(string test)
{
    cout << test << endl;
}

void test01()
{
    MyFunction myprint;
    myprint ("hello world");//  由于使用起来非常类似于函数调用,因此称为仿函数
    myprint2("hello world");
    
    //函数调用运算符重载的重载(根据参数不同)
    MyFunction myprint3;
    cout << myprint3(1,2) << endl;

    //匿名函数对象
    cout << MyFunction()(1,2) << endl;
}

int main()
{
    test01();
    return 0;
}