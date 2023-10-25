//静态成员

//静态成员就是在成员变量和成员函数前加上关键字static,称为静态成员

//静态成员分为:
//1.静态成员变量:
    //1.所有对象共享同一份数据
    //2.在编译阶段分配内存(程序还内有运行之前就已经分配内存了:全局区)
    //3.类内声明,类外初始化
//2.静态成员函数:
    //1.所有对象共享同一个函数
    //2.静态成员函数只能访问静态成员变量
#include<bits/stdc++.h>
using namespace std;
// //1.静态成员变量:
// class Person
// {//1.静态成员变量:
//         //1.所有对象共享同一份数据
//         //2.在编译阶段分配内存(程序还内有运行之前就已经分配内存了:全局区)
//         //3.类内声明,类外初始化
// public:
//     static int P_A;
//                                  //静态成员变量也是有访问权限的
// private:
//     static int P_B;
// };
// //1.3类内声明,类外初始化
// //全局变量:int P_A = 100;
// //Person作用域内的静态变量:int Person::P_A = 100;
// int Person::P_A = 100;
// int Person::P_B = 200;
// void test01()
// {
//     Person p1;
//     cout << p1.P_A << endl;
//     //1.1所有对象共享同一份数据
//     Person p2;
//     p2.P_A = 200;
//     cout << p1.P_A << endl;
// }
//
// void test02()
// {
//     //1.1静态成员变量,不属于某个对象上,所有对象都共享同一份数据
//     //因此静态成员变量有两种访问方式
//     //1.通过对象进行访问:
//     Person p3;
//     cout << p3.P_A << endl;
//     //2.通过类名进行访问:
//     cout << Person::P_A << endl;//Person作用域下的静态变量(Person::P_A)
//     //静态成员变量也是有访问权限的
//     //类外访问不到类内的私有静态成员变量
//     //cout << Person::P_B << endl;//'int Person::P_B' is private within this context
// }



// //2.静态成员函数
// class Person
// {//2.静态成员函数:
//     //1.所有对象共享同一个函数
//     //2.静态成员函数只能访问静态成员变量
// public:
//     static void func()
//     {
//         //2.1所有对象共享同一个函数
//         P_A = 100;//静态成员函数可以访问静态成员变量,因为静态成员变量是共享的,每个对象都有一份,不用考虑变量的所属关系
// 
//         //2.2静态成员函数只能访问静态成员变量
//         //静态成员函数,不可以访问非静态成员的变量(构造函数不能为静态成员函数)(constructor cannot be static member function)
//         //P_B = 200;//在静态成员函数中使用成员'Person::P_B'无效(invalid use of member 'Person::P_B' in static member function)
//         //原因:
//         //1.构造函数不能为静态成员函数 
//         //2.既然静态成员函数不能是构造函数,则在静态成员函数中不能区分到底是改变那个对象的成员变量
//         //如:在test03()中创建对象p4、p5,同时调用静态成员函数p4.func()和p5.func(),函数p4.func()和p5.func()是相同的函数,
//         //如果在func()中给非静态的成员变量赋值/赋初值,则func()函数的内部实现无法区分到底是改变p4还是p5的非静态成员变量
//         cout << "静态成员函数的调用" << endl; 
//     }
//                                         //静态成员函数也是有访问权限的
// private:
//     static void func2()
//     {
//         cout << "func2()函数的调用" << endl;
//     }
// public:
//     static int P_A;//静态成员变量
//     int P_B;//非静态成员变量
// };
// //静态成员变量的类内声明,类外初始化
// int Person::P_A = 0;
// //有两种访问方式
// void test03()
// {
//     //1.通过对象访问
//     Person p4;
//     p4.func();
//     cout << p4.P_A << endl;
//     //2.通过类名访问
//     //2.1所有对象共享同一个函数
//     Person::func();
// 
//     //静态成员函数也是有访问权限的
//     //1.通过对象访问    
//     //p4.func2();//'static void Person::func2()' is private within this context(背景,环境,上下文)
//     //2.通过类名访问
//     //Person::func2();
// }


int main()
{
    //test01();
    //test02();
    test03();
    return 0;
}