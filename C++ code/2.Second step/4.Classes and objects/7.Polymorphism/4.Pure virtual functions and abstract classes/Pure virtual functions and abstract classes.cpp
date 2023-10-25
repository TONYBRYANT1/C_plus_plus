//纯虚函数和抽象列
//在多态中,通常父类中虚函数的实现是毫无意义的,主要都是调子类的重写内容
//因此,可以将虚函数改为纯虚函数
//纯虚函数语法:virtual 返回值类型 函数名 (参数列表) = 0;
//当类中有了纯虚函数,这个类也称为抽象类

//抽象类的特点:
//1.无法实例化对象
//2.子类必须重写抽象类中的纯虚函数,否则也属于抽象类
//总结:子类必须重写抽象类中的纯虚函数,否则无法实例化对象

#include<bits/stdc++.h>

using namespace std;

class Base
{
public:
    //纯虚函数
    //只要有一个纯虚函数,这个类就称为抽象类
    //抽象列的特点:
    //1.无法实例化对象
    //2.子类必须重写抽象类中的纯虚函数,否则也属于抽象类
    virtual void func() = 0;
};

class Son1 : public Base
{

};

class Son2 : public Base
{
public:
    void func()
    {
        cout << "Son2——————func()函数调用" << endl;
    }
};

void test01()
{
    //1.无法实例化对象:
    //Base b;//object of abstract class type "Base" is not allowed(抽象类类型为“Base”的对象是不允许的)
    //new Base;//object of abstract class type "Base" is not allowed
    //2.子类必须重写抽象类中的纯虚函数,否则也属于抽象类:
    //Son1 s;//object of abstract class type "Base" is not allowed
    //new Son1;//object of abstract class type "Base" is not allowed

    Base * base = new Son2;
    base->func();
}

int main()
{
    test01();
    return 0;
}