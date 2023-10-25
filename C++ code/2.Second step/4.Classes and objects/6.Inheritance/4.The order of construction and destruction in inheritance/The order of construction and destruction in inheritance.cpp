//继承中构造和析构顺序
//子类继承父类后,当创建子类对象,也会调用父类的构造函数
//问题:父类和子类的构造和析构顺序是谁先谁后？
//答案:构造:先有爸爸,后又儿子   析构:先构造的后析构,后构造的先析构\
//即:
// Father的默认构造函数调用
// Son的默认构造函数调用
// Son的默认析构函数调用
// Father的默认析构函数调用

#include<bits/stdc++.h>
using namespace std;

class Father
{
public:
    Father()
    {
        cout << "Father的默认构造函数调用" << endl;
    }
    ~Father()
    {
        cout << "Father的默认析构函数调用" << endl;
    }
};

class Son : public Father
{
public:
    Son()
    {
        cout << "Son的默认构造函数调用" << endl;
    }
    ~Son()
    {
        cout << "Son的默认析构函数调用" << endl;
    }
};

void test01()
{
    Son s;
}

int main()
{
    test01();
    return 0;
}