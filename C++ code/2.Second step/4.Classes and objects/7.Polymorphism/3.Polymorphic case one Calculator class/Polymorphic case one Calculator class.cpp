//多态案例一:计算器类
//案例描述:
//分别利用普通写法和多态技术,设计实现两个操作数进行运算的计算器类

//多态的优点:
//1.代码组织结构清晰
//2.可读性强
//3.利于前期和后期的扩展以及维护

//C++开发提倡利用多态设计程序架构,因为多态优点有很多

#include<bits/stdc++.h>

using namespace std;

// //普通写法:
// class Calculator
// {
// public:
//     int GetResult(string oper)
//     {
//         if(oper == "+")
//         {
//             return C_a + C_b;
//         }
//         else if(oper == "-")
//         {
//             return C_a - C_b;
//         }
//         else if(oper == "*")
//         {
//             return C_a * C_b;
//         }
//         else if(oper == "/")
//         {
//             return C_a / C_b;
//         }
//         return 0;
//         //若不写 return 0; 会报错:
//         //control reaches end of non-void function [-Wreturn-type] 
//         //控制到达非空函数结束[- return-type] 
//         //用gcc编译一个程序的时候出现这样的警告：
//         // warning: control reaches end of non-void function
//         // 它的意思是：控制到达非void函数的结尾。就是说你的一些本应带有返回值的函数到达结尾后可能并没有返回任何值。这时候，最好检查一下是否每个控制流都会有返回值。
//
//         //如果想扩展新的功能,需要修改源码
//         //在真实开发中 提倡 开闭原则
//         //开闭原则:对扩展进行开放 对修改进行关闭
//     }
//
// public:
//     int C_a;//操作数1
//     int C_b;//操作数2
// };
//
// //普通写法:
// void test01()
// {
//     Calculator cal;
//     cal.C_a = 10;
//     cal.C_b = 20;
//     cout << cal.C_a << " + " << cal.C_b << " = " << cal.GetResult("+") << endl;
//     cout << cal.C_a << " - " << cal.C_b << " = " << cal.GetResult("-") << endl;
//     cout << cal.C_a << " * " << cal.C_b << " = " << cal.GetResult("*") << endl;
//     cout << cal.C_a << " / " << cal.C_b << " = " << cal.GetResult("/") << endl;
// }



//利用多态实现计算器:

//1.实现计算器基类(抽象类):
class AbstractCalculator
{
public:
    virtual int GetResult()//虚函数
    {
        return 0;
    }
public:
    int C_a;
    int C_b;
};

//2.实现加法计算器类:
class AddCalculator : public AbstractCalculator
{
public:
    int GetResult()//虚函数
    {
        return C_a + C_b;
    }
};

//3.实现减法计算器类:
class SubCalculator : public AbstractCalculator
{
public:
    int GetResult()//虚函数
    {
        return C_a - C_b;
    }
};

//4.实现乘法计算器类:
class MulCalculator : public AbstractCalculator
{
public:
    int GetResult()//虚函数
    {
        return C_a * C_b;
    }
};

//4.实现除法计算器类:
class DivCalculator : public AbstractCalculator
{
public:
    int GetResult()//虚函数
    {
        return C_a / C_b;
    }
};

//利用多态实现计算器:
void test02()
{
    //多态使用条件:
    //父类指针或者引用指向子类对象

    //加法运算
    AbstractCalculator * abc = new AddCalculator;//创造父类指针abc -> 子类成员add
    abc->C_a = 100;
    abc->C_b = 200;
    cout << abc->C_a << " + " << abc->C_b << " = " << abc->GetResult() << endl;
    //用完后记得销毁
    delete abc;
    abc = NULL;

    //减法运算
    abc = new SubCalculator;//创造父类指针abc -> 子类成员add
    abc->C_a = 200;
    abc->C_b = 100;
    cout << abc->C_a << " - " << abc->C_b << " = " << abc->GetResult() << endl;
    //用完后记得销毁
    delete abc;
    abc = NULL;

    //减法运算
    abc = new MulCalculator;//创造父类指针abc -> 子类成员add
    abc->C_a = 200;
    abc->C_b = 100;
    cout << abc->C_a << " * " << abc->C_b << " = " << abc->GetResult() << endl;
    //用完后记得销毁
    delete abc;
    abc = NULL;

    //除法运算
    abc = new DivCalculator;//创造父类指针abc -> 子类成员add
    abc->C_a = 200;
    abc->C_b = 100;
    cout << abc->C_a << " / " << abc->C_b << " = " << abc->GetResult() << endl;
    //用完后记得销毁
    delete abc;
    abc = NULL;
}

int main()
{
    //test01();//普通写法:
    test02();//利用多态实现:
    return 0;
}