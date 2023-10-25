//多态的基本概念
    //1.多态分为两类:
        //1.静态多态:函数重载 和 运算符重载属于静态多态,复用函数名
        //2.动态多态:派生类和虚函数实现运行时多态

    //2.静态多态和动态多态的区别:
        //1.静态多态的函数地址早绑定 - 编译阶段确定函数地址
        //2.动态多态的函数地址晚确定 - 运行阶段确定函数地址  

    //3.动态多态满足条件
        //1.有继承关系(Cat、Dog类 继承了 Animal类)
        //2.子类重写父类的虚函数(Cat、Dog类中重写了Animal类的speak()函数)
        //重写: 函数返回值类型  函数名  参数列表    完全相同

    //4.动态多态的使用
        //父类的指针或者引用    指向子类对象

#include<bits/stdc++.h>

using namespace std;
//多态
//动物类
class Animal
{
public:
    //1.静态多态的函数地址早绑定 - 编译阶段确定函数地址
    // void speak()
    // {
    //     cout << "动物在说话" << endl;
    // }

    //2.动态多态的函数地址晚确定 - 运行阶段确定函数地址  
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

//执行说话的函数

//问题:为什么向DoSpeak()函数传入的是子类(猫/狗),却打印出的是"动物在说话",而不是"猫在说话"或者是"狗在说话" ？

//1.问题原因:因为DoSpeak函数参数是Animal类对象,Animal类中的speak()函数属于静态多态的函数地址早绑定 - 编译阶段确定函数地址,在子类对象传入之前就先确定了使用的是Animal类中的speak()函数
//所以即使子类对象可以传入,调用的也是Animal类的speak函数,而不是传入的子类的speak函数

//2.解决办法:如果想执行让猫说话,那么这个函数地址就不能提前绑定,需要地址晚绑定,在运行阶段确定函数地址,让传入的对象来决定调用的具体是那个类中的speak()函数
//做法:在Animal类中的speak()函数前加上virtual , 使得Animal类中的speak()函数属于动态多态的函数,地址晚确定 - 运行阶段确定函数地址
void DoSpeak(Animal &animal)// Animal& animal = cat : 父类的引用 接收 子类的对象(C++允许父子之间的类型转换)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    Dog dog;
    DoSpeak(cat);//本意是想让猫说话
    DoSpeak(dog);//本意是想让狗说话
}

int main()
{
    test01();
    return 0;
} 