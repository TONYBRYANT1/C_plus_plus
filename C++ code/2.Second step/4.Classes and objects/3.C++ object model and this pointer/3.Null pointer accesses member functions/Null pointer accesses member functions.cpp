//空指针访问成员函数
//如果用到this指针,需要加以判断保证代码的健壮性
#include<bits/stdc++.h>
using namespace std;

//空指针调用成员函数

class Person
{
public:
    void ShowClassName()
    {
        cout << "this is Person class" << endl;
    }
    void ShowPersonAge()
    {
        if(this == NULL)//禁止空指针访问成员函数,保持代码的健壮性
        {
            return ;
        }
        cout << "age = " << P_age << endl;//P_age <==> this->P_age 表示当前对象的属性
    }
private:
    int P_age ;
        //static int P_age;//尝试静态成员变量在非静态成员函数中的使用
};  
//int Person::P_age = 0;//尝试静态成员变量在非静态成员函数中的使用

void test01()
{
    //静态成员函数只能访问静态成员变量
    //调用成员函数:1.利用对象调用(p.ShowPersonAge) 2.利用指向对象的指针进行调用(P->ShowPersonAge)
    //当非静态成员函数访问非静态成员变量时
    //1.Person p1; p1.ShowPersonAge();  在ShowPersonAge的函数中 P_age < == > this->P_age (其中this是指向p1对象的类指针)
    //2.Person*P = NULL; P->ShowPersonAge();  因为对象没有实体化,所以ShowPersonAge中的this为NULL,相当于空指针访问成员对象,引发异常
    Person*p = NULL;
    p->ShowClassName();
    p->ShowPersonAge();//(Exception has occurred 发生异常)(Segmentation fault 分段错误:一种软件错误，当程序试图访问其无权访问的内存位置时发生)
    //当空指针调用非静态成员函数时,若非静态成员函数中涉及到非静态成员变量,例如: P_age ,则等价于 this->P_age , 因为 this 指针为空 , 则引发异常
}
int main()
{
    test01();
    return 0;
}