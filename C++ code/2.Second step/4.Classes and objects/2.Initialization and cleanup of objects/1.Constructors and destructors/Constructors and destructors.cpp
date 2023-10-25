
//构造函数和析构函数将会被编译器 自动调用 ,完成对象的初始化工作和清理工作
//对象的初始化工作和清理工作是编译器 强制要求 我们做的事情
//如果我们不提供构造函数和析构函数,编译器会提供编译器提供的构造函数和析构函数(空实现)
//如果我们提供了构造函数和析构函数,编译器就 自动调用 我们提供的构造函数和析构函数
//构造函数---初始化(主要作用在于创建对象时为对象的成员属性赋值,构造函数由编译器自动调用,无需手动调用)
//析构函数--- 清理 (主要作用在于对象 销毁前 系统自动调用 ,执行一些清理工作)

//构造函数语法:类名(){}
// 1. 构造函数，没有返回值也不写void
// 2. 函数名称与类名相同
// 3. 构造函数可以有参数，因此可以发生重载
// 4. 程序在调用对象时候会自动调用构造函数，无须手动调用,而且只会调用一次

//析构函数语法:~类名(){}
// 1. 析构函数，没有返回值也不写void
// 2. 函数名称与类名相同,在名称前加上符号  ~
// 3. 析构函数不可以有参数，因此不可以发生重载
// 4. 程序在对象销毁前会自动调用析构函数，无须手动调用,而且只会调用一次

#include<bits/stdc++.h>
using namespace std;


class Person
{   
public:
//对象的初始化和清理:
    //1.构造函数(进行初始化操作)
    Person()
    {
        cout << "Person的构造函数的调用" << endl;
    }
    //如果不写构造函数,编译器提供的构造函数
    // Person()
    // {
    //     ;//空实现
    // }

    //2.析构函数(进行清理的工作)
    ~Person()
    {
        cout << "Person的析构函数的调用" << endl;
    }
    //如果不写构造函数,编译器提供的构造函数
    // ~Person()
    // {
    //     ;//空实现
    // }

};

// void test01()
// {
//     Person p;//在栈上的数据,test01()执行完毕后,释放这个对象--->程序在对象销毁前会自动调用析构函数
// }

int main()
{
    //test01();
    Person p;
    //Person的构造函数的调用
    //Press any key to continue . . . 
    //Person的析构函数的调用--->程序在对象销毁前会自动调用析构函数
    system("pause");
    return 0;
}