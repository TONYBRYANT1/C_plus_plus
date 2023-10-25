//初始化列表
//作用:C++提供了初始化列表语法,用来初始化属性
//





#include<bits/stdc++.h>

using namespace std;
class Person
{
public:
    //传统初始化操作
    // Person(int a,int b,int c)
    // {
    //     p_A=a;
    //     p_B=b;
    //     p_C=c;
    // }
    
    //初始化列表初始化属性
    //1.初始值固定
    // Person():p_A(10) , p_B(20) , p_C(30)
    // {
    //     ;
    // }
    //2.初始值自定义
    Person(int a,int b,int c):p_A(a) , p_B(b) , p_C(c)
    {
        ;
    }
public:
    int p_A;
    int p_B;
    int p_C;
};
void test01()
{
    //传统初始化操作
    // Person p1(10 , 20 , 30);
    // cout << "p_A = " << p1.p_A << endl;
    // cout << "p_B = " << p1.p_B << endl;
    // cout << "p_C = " << p1.p_C << endl;

    //初始化列表初始化属性
    //1.初始值固定
    // Person p2;
    // cout << "p_A = " << p2.p_A << endl;
    // cout << "p_B = " << p2.p_B << endl;
    // cout << "p_C = " << p2.p_C << endl;
    //2.初始值自定义
    Person p3(10,20,30);
    cout << "p_A = " << p3.p_A << endl;
    cout << "p_B = " << p3.p_B << endl;
    cout << "p_C = " << p3.p_C << endl;
}
int main()
{
    test01();
    //system("pause");
    return 0;
}