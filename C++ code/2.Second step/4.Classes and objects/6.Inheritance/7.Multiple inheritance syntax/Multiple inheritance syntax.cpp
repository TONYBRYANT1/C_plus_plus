//多继承语法
//C++允许一个类继承多个类
//语法:class 子类 : 继承方式 父类1 , 继承方式 父类2 ...
//多继承可能会引发父类中有同名成员出现,需要加作用域区分
//C++实际开发中不建议用多继承

#include<bits/stdc++.h>
using namespace std;

//父1:吕良
class LL
{
public:
    LL()
    {
        T_a = 100;
    }

public:
    int T_a;

};

//父2:丁原
class DY
{
public:
    DY()
    {
        T_a = 200;
    }

public:
    int T_a;

};

//父3:董卓
class DZ
{
public:
    DZ()
    {
        T_a = 300;
    }

public:
    int T_a;
    
};

//儿:奉先
//继承:吕良、丁原、董卓
//语法:class 子类 : 继承方式 父类1 , 继承方式 父类2 ...
class FX : public LL , public DY , public DZ
{
public:
    FX()
    {
        FX_a = 400;
        FX_b = 500;
    }

public:
    int FX_a;
    int FX_b;

};

void test01()
{
    FX fx;
    cout << "sizeof fx = " << sizeof(fx) << endl;
    //cout << "T_a = " << fx.T_a << endl;//request for member 'T_a' is ambiguous
    cout << "T_a = " << fx.LL::T_a << endl;
    cout << "T_a = " << fx.DY::T_a << endl;
    cout << "T_a = " << fx.DZ::T_a << endl;
}

int main()
{
    test01();
    return 0;
}