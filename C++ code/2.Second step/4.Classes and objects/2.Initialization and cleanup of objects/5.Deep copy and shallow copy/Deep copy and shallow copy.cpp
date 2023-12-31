//深拷贝&浅拷贝
//深浅拷贝是面试经典问题,也是一个常见的坑
//浅拷贝:简单的赋值拷贝操作
//如果是利用编译器提供的拷贝构造函数,会做浅拷贝工作,当对象的成员含有占用堆区空间时,可能在析构函数调用时,使堆区上的空间重复释放,导致出现问题:
//例:p1,p2是具体的对象,其成员有两个(1.年龄(栈区) 2.身高(堆区)) 
//1.创建p1 ---> Person p1(19,175);
//创建过程:1.在栈区创建年龄变量 2.在栈区创建身高指针 3.在堆区创建身高变量 4.将身高变量的地址编号存入身高指针
//2.创建p2 ---> Person p2(p1);
//因为用户没有定义拷贝构造函数,所以编译器提供了默认的拷贝构造函数(浅拷贝)
//浅拷贝过程:1.在栈区创建年龄变量并逐字节地拷贝p1的年龄数值 2.在栈区创建身高指针 3.将p1在堆区创建的身高变量的地址存入栈区中p2身高的指针
//3.进行打印等操作...
//4.进行析构函数调用:由于栈区执行原则后进先出,则先将p2的年龄变量释放,再将p2身高指针所指向的堆区中的身高变量释放,再将p2的身高指针释放,
//然后释放p1的年龄变量,再释放p1身高指针所指向的堆区中的身高变量,由于这个堆区中的身高变量已经别释放了,如果再次释放则会出现问题了
//这种问题的好的处理方法是用 深拷贝 --->在堆区重新申请空间进行拷贝操作,而不是再让p2的身高指针指向p1在堆区申请的身高变量了

//深拷贝:在堆区重新申请空间,进行拷贝操作

//总结:如果有属性需要在堆区开辟的,一定要自己提供拷贝构造函数,防止浅拷贝带来的问题
#include<bits/stdc++.h>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数的调用" << endl;
    }
    Person(int age ,int height)
    {
        p_age = age;
        p_Height = new int(height);
        cout << "Person的有参构造函数的调用" << endl;
    }
    Person(const Person &p)
    {
        cout << "Person 拷贝构造函数的调用" << endl;
        p_age = p.p_age;
        //p_Height = p.p_Height; //在编译器的默认拷贝构造函数中,用的就是这个代码,将p1在堆区创建的身高变量的地址存入栈区中p2身高的指针
        //深拷贝操作:
        p_Height = new int(*p.p_Height);//在堆区创建一个新的身高变量,并用p2的身高指针指向这一新创建的身高变量
    }
    ~Person()
    {
        //析构代码,将堆区开辟的数据做释放操作
        if(p_Height != NULL)
        {
            delete p_Height;
            p_Height = NULL;
        }
        cout << "Person的析构函数的调用" << endl;
    }

public:
    int p_age; //年龄
    int *p_Height; //身高
};

void test01()
{
    Person p1(19,175);

    cout << "p1的身高为:" << p1.p_age << "  身高为:" << *p1.p_Height << endl;

    Person p2(p1);

    cout << "p2的身高为:" << p2.p_age << "  身高为:" << *p2.p_Height << endl;
}
int main()
{
    test01();
    //system("pause");
    return 0;
}