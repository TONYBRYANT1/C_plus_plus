//构造函数的调用规则
// 默认情况下,c++编译器至少给一个类添加3个函数
// 1.默认构造函数(无参,函数体为空)
// 2.默认析构函数(无参,函数体为空)(析构函数不能重载--->无参)
// 3.默认拷贝构造函数(对属性进行值拷贝)

// 构造函数调用规则如下:
// 1.如果用户定义有参构造函数,c++编译器就不再提供默认无参构造函数,但是会提供默认拷贝构造函数
// 2.如果用户定义拷贝构造函数,c++编译器就不会再提供其它构造函数(默认构造函数&有参构造函数)

#include<bits/stdc++.h>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数的调用" << endl;
    }
    // 1.如果用户定义有参构造函数,c++编译器就不再提供默认无参构造函数,但是会提供默认拷贝构造函数
    //Error:no matching function for call to 'Person::Person()'
    // Person()
    // {
    //     cout << "Person的默认构造函数的调用" << endl;
    // }

    Person(int age)
    {
        cout << "Person的有参构造函数的调用" << endl;
        p_age = age;
    }

    // 2.如果用户定义拷贝构造函数,c++编译器就不会再提供其它构造函数(默认构造函数&有参构造函数)
    Person(const Person &p)
    {
        p_age = p.p_age;
        cout << "Person的拷贝构造函数的调用" << endl;
    }
    //如果用户定义拷贝构造函数,c++不会再提供其它构造函数
    // Person(const Person &p)
    // {
    //     p_age = p.p_age;
    //     cout << "Person的拷贝构造函数的调用" << endl;
    // }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

public:
    int p_age;
};
void test01()
{
    Person p1;
    p1.p_age = 18;
    Person p2(p1);
    cout << "p1的年龄:" << p1.p_age << endl;
    cout << "p2的年龄:" << p2.p_age << endl;
}
void test02()
{
    Person p1;
    Person p2(p1);
}
int main()
{
    //test01();
    test02();
    //system("pause");
    return 0;
}