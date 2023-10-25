//赋值运算符重载
//c++编译器至少给一个类添加4个函数
//1.默认构造函数(无参,函数体为空)
//2.默认析构函数(无参,函数体为空)
//3.默认拷贝构造函数,对属性进行值拷贝
//4.赋值运算符 operator= ,对属性进行值拷贝

//如果类中有属性指向堆区,做赋值操作是也会出现深浅拷贝问题
#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    Person(int age)
    {
        P_age = new int(age);
    }
    ~Person()
    {
        if(P_age!=NULL)
        {
            delete P_age;
            P_age = NULL;
        }
    }
    //自定义赋值运算符
    Person& operator=(const Person& p)
    {
        //编译器提供的赋值运算符(浅拷贝)
        //P_age = p.P_age;
        
        //自定义赋值运算符(深拷贝)
        //1.先判断堆区是否释放干净
        if(P_age!=NULL)
        {
            delete P_age;
            P_age = NULL;
        }
        //2.再开辟新的堆区空间,并做指向(深拷贝)
        P_age = new int(*p.P_age);
        //3.返回自身(链式编程的思想)       
        return *this;//链式编程的思想
    }
public:
    int* P_age;
};

void test01()
{
    Person p1(10);
    cout << "p1的年龄为:" << *p1.P_age << endl;
    Person p2(20);
    cout << "p2的年龄为:" << *p2.P_age << endl;
    Person p3(30);
    cout << "p3的年龄为:" << *p3.P_age << endl;
    p1 = p2 = p3;//编译器默认提供的赋值运算符(浅拷贝,容易出现堆区内存重复释放,而导致程序崩溃的问题)
    cout << "p1的年龄为:" << *p1.P_age << endl;
    cout << "p2的年龄为:" << *p2.P_age << endl;
    cout << "p3的年龄为:" << *p3.P_age << endl;

}

int main()
{
    test01();
    return 0;
}