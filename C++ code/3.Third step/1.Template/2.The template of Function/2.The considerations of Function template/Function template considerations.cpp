//函数模版的注意事项
//注意事项:
//1.自动类型推导,必须推导出一致的数据类型T,才可以使用
//2.模版必须要确定出T的数据类型,才可以使用

#include<bits/stdc++.h>
using namespace std;

template<typename T> //typename可以替换成class
void myswap(T&a , T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

//1.自动类型推导,必须推导出一致的数据类型T,才可以使用
void test01()
{
    int a = 0;
    int b = 10;
    char c = 'A';
    myswap(a,b);//正确
    //自动类型推导,必须推导出一致的数据类型T,才可以使用
    //(X) myswap(a,c);//错误 推导不出一致的T类型
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//2.模版必须要确定出T的数据类型,才可以使用
template<class T>
void func()
{
    cout << "func 调用" << endl;
}

void test02()
{
    func<int>();//随便放什么类型到<>中,只要确定T的类型是什么就行
}

int main()
{
    test01();
    test02();
    return 0;
}