//左移运算符重载
//作用:可以输出自定义的数据类型(重载左移运算符 配合 友元 可以实现输出自定义数据类型)

#include<bits/stdc++.h>
using namespace std;

class Person
{
friend void test01();
friend ostream& operator<<(ostream& cout , Person& p);
public:
    Person(int a,int b)
    {
        P_A = a;
        P_B = b;
    }
    //利用成员函数重载 左移运算符 
    //考虑1: p.operator<<(p) 需要两个对象--->不合适
    //考虑2: p.operator<<(cout) 应用的格式为p << cout,而我们需要的是cout << p --->不适合
    //综上:  不会利用成员函数去重载<<运算符,因为无法实现 cout 在左侧
    // void operator<<(Person &p)
    // {

    // }
private:
    int P_A;
    int P_B;
};

//利用全局函数去重载左移运算符
//cout 的类型是标准输出流 , 而全局只能有一个cout , 所以当 cout 作为函数参数时 需要引用
//为了让其具备链式编程思想 , 即cout << p << "可以继续输出其他东西" << endl;
//我们将函数的返回值定位cout(返回值类型为ostream) 
ostream& operator<<(ostream& cout , Person& p)   //本质 <==> cout << p
{
    cout << "p.P_A = " << p.P_A << '\t' << "p.P_B = " << p.P_B << endl;
    return cout;
}

void test01()
{
    Person p1(10,20);
    cout << "p.P_A = " << p1.P_A << '\t' << "p.P_B = " << p1.P_B << endl;
    cout << p1 << "有了链式编程思想,利用全局函数去重载左移运算符后还可以添加别的内容哦!" << endl;
}
int main()
{
    test01();
    return 0;
}