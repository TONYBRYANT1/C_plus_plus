//拷贝构造函数的调用时机:
//1.使用一个已经创建完毕的对象来初始化一个新对象(Clone)
//2.值传递的方式给函数参数传值
//3.以值的方式返回局部对象
#include<bits/stdc++.h>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数的调用" << endl;
    }
    Person(int age)
    {
        cout << "Person的有参构造函数的调用" << endl;
        p_age=age;
    }
    Person(const Person &p)
    {
        cout << "Person的拷贝构造函数的调用" << endl;
        p_age=p.p_age;
    }
    ~Person()
    {
        cout << "Person的析构函数的调用" << endl;
    }
public:
    int p_age;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象(Clone)
void test01()
{
    Person p1(20);
    cout << p1.p_age << endl;
    Person p2(p1);
    cout << p2.p_age << endl;
}
//2.值传递的方式给函数参数传值
void Value_passing_of_the_object(Person p)//对象的值传递相当于Clone,所以会调用克隆构造函数
{
    p.p_age=100;//因为是值传递所以改变p的年龄不会对p1产生影响
    cout << "p 的年龄:" << p.p_age << endl;
}
void test02()
{
    Person p1;//默认创建对象--->调用默认构造函数&析构函数
    p1.p_age=10;
    cout << "p1的年龄:" << p1.p_age << endl;
    Value_passing_of_the_object(p1);//对象传值--->调用拷贝构造函数&析构函数
    cout << "p1的年龄:" << p1.p_age << endl;
}


//3.以值的方式返回局部对象
Person Value_returning_of_the_object()
{
    Person p;
    cout << (int*)&p << endl;
    return p;
}
void test03()
{
    Person p1 = Value_returning_of_the_object();//函数的返回值不是p,而是p的一份拷贝,但地址为什么又是一样的呢？-------------- 优化
    cout << (int*)&p1 << endl;
}
int main()
{
    //test01();
    //test02();
    test03();
    //system("pause");
    return 0;
}
 
//原因分析:
//1.没优化:1.原则上是先创建p,2.然后打印p的地址,3.然后将p的副本返回给p1,调用拷贝构造函数,进行拷贝,4.析构p再,5.打印p1的地址,6.析构p1
//1.结果为:
        //Person默认构造函数调用   --- for p
        //010EF894               --- for p
        //Person拷贝构造函数调用  --- for p1
        //Person析构函数调用      --- for p
        //010EF98C               --- for p1
        //Person析构函数调用      --- for p1
//2.优化后:1.先创建p,2.然后打印p的地址,3.让p引用p1,并进行打印地址,4.析构p/p1
//2.结果为:
// Person的默认构造函数的调用
// 0x61fd0c
// 0x61fd0c
// Person的析构函数的调用