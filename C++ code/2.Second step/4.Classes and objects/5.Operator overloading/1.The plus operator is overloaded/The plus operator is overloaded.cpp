//加号运算符重载:
//1.
    //1.成员函数重载+号
    //2.全局函数重载+号
//2.
    //运算符重载也可以发生函数重载
//3.
    //对于内置的数据类型的表达式的运算符是不可以改变的(1+1的'+'不能发生改变)
//4.
    //不要滥用运算符重载(加就是加,减就是减,不要在operator+的内部实现减法运算)

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    //1.成员函数重载+号
    // Person operator+(Person &p)
    // {
    //     Person temp;
    //     temp.P_A = this->P_A + p.P_A ;
    //     temp.P_B = this->P_B + p.P_B ;
    //     return temp;//由于返回类型是Person,是temp的一份临时拷贝,并不是temp本身
    // }
public:
    int P_A;
    int P_B;
};

Person operator+(Person& p1 , Person& p2)
{
    Person temp;
    temp.P_A = p1.P_A + p2.P_A;
    temp.P_B = p1.P_B + p2.P_B;
    return temp;
}
//运算符重载也可以发生函数重载
Person operator+(Person&p1 , int i)
{
    Person temp;
    temp.P_A = p1.P_A + i;
    temp.P_B = p1.P_B + i;
    return temp;
}
void test01()
{
    Person p1;
    p1.P_A=10;
    p1.P_B=20;

    Person p2;
    p2.P_A=30;
    p2.P_B=40;

    Person p3 = p1 + p2;
    //成员函数重载+号的本质调用<==>Person p3 = p1.operator+(p2);
    //全局函数重载+号的本质调用<==>Person p3 = operator+(p1,p2);
    cout << p3.P_A << endl;
    cout << p3.P_B << endl;
    
    //运算符重载也可以发生函数重载
    Person p4 = p1 + 100;
    cout << p4.P_A << endl;
    cout << p4.P_B << endl;
} 
int main()
{
    test01();
    return 0;
}