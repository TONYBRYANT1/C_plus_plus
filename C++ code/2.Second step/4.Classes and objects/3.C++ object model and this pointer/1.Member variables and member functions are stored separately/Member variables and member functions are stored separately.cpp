//成员变量和成员函数分开储存
//类只是一种类型,没有大小可言。使用sizeof得到的大小,只是它的实例化对象的大小,所以类的大小与对象的大小是一样的。
//在C++中,类内的成员变量和成员函数分开储存
//只有非静态成员变量才属于类的对象上
#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
//只有非静态成员变量才属于类的对象上
    int P_A;//非静态成员变量    属于类的对象上

    static int P_B;//静态成员变量   不属于类的对象上

    void func1()
    {
        ;           //非静态成员函数    不属于类的对象上
    }

    static void func2()
    {
        ;           //静态成员函数      不属于类的对象上
    }
};
void test01()
{
    Person p;
    //空对象占用内存空间为:1
    //C++编译器会给每个空对象也分配一个字节空间,是为了 区分 空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址  
    cout << "空对象p所占用的内存空间:" << sizeof(p) << endl;
}
void test02()
{
    Person p;
    //如果对象有非静态变量成员,则成员所占内存总数==对象所占内存总数
    cout << "sizeof Person = " << sizeof(Person) << endl;
    cout << "p所占用的内存空间:" << sizeof(p) << endl;
}
int main()
{
    //test01();
    test02();
    return 0;
}