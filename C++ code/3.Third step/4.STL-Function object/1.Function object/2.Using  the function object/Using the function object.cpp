// 函数对象使用

// 特点:
//     函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
//     函数对象超出普通函数的概念，函数对象可以有自己的状态
//     函数对象可以作为参数传递
#include<bits/stdc++.h>
using namespace std;

//1.函数对象在使用时,可以像普通函数那样调用,可以有参数,可以有返回值
class MyAdd
{
public:
    int operator()(int v1 , int v2)
    {
        return v1 + v2;
    }
public:
};

//1.函数对象在使用时,可以像普通函数那样调用,可以有参数,可以有返回值
void test01()
{
    MyAdd myAdd;
    cout << myAdd(10 , 10) << endl;
    
}

//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
    MyPrint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        (this->count)++;
    }
public:
    int count;
};

//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
void test02()
{
    MyPrint myprint;
    myprint("lalala");
    myprint("lalala");
    myprint("lalala");
    myprint("lalala");

    cout << "MyPrint调用的次数为: " << myprint.count << endl;

}

//3.函数对象可以作为参数传递
void doPrint(MyPrint& mp , string test)
{
    mp(test);
}

void test03()
{
    MyPrint myprint;
    doPrint(myprint , "HelloWorld!");
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}

