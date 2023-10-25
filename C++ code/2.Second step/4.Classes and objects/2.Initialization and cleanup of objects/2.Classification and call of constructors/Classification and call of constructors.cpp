//构造函数的分类及调用
//两种分类方式:
    //按参数分为:有参构造 无参构造
    //按类型分为:普通构造 拷贝构造
//三种调用方式:
    //括号法
    //显示法
    //隐式转换法
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
//1.构造函数分类:
    //1.普通构造函数:
        //1.无参构造(默认构造):
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
        //2.有参构造:
    Person(int a)
    {
        age=a;
        cout << "Person的有参构造函数调用" << endl;
    }
    //2.拷贝构造函数:(将传入的人身上的所有属性,拷贝到我身上)
    Person(const Person &p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        age=p.age;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
public:
    int age;
};

//1.构造函数调用:
void test01()
{
    //1.括号法:
    // Person p1;//默认构造函数的调用
    //Person p2(10);//有参构造函数的调用
    //Person p3(p2);
    // cout << p2.age << endl;
    // cout << p3.age << endl;
        //注意事项1
        //调用默认构造函数时候,不要加()---因为(Person p1();),编译器会认为是一个函数声明,不会认为在创建对象
    //2.显示法:
    // Person p1;
    // Person p2 = Person(10);//有参构造
    // Person p3 = Person(p2);//拷贝构造

    //Person(10);--->匿名对象:
    // 1.当单独写(Person(10);)时 特点:当前行执行结束后,系统会立即回收掉匿名对象(析构)
    // 如:
    // Person(10);
    // cout << "------------------------------分割线------------------------------" << endl;
    // 2.当组合写(Person p = Person(10);)时 特点:相当于Person p(10);
        //注意事项2
        //不要利用拷贝构造函数来初始化匿名对象---因为编译器会认为(Person(p3);)<==>(Person p3;)
        //报错信息:redeclaration(重定义) of 'Person p3'

    //3.隐式转换法:
    Person p4 = 10;//有参构造<==>Person p4 = Person(10); <==> Person p4(10);
    Person p5 = p4;//拷贝构造<==>Person p5 = Person(p4); <==> Person P5(p4);
    cout << p4.age << endl;
    cout << p5.age << endl;

}
int main()
{
    test01();
    //system("pause");
    return 0;
}