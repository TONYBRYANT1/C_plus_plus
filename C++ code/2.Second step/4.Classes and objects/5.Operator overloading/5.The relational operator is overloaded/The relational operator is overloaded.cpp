//关系运算符重载
//作用:重载关系运算符,可以让两个自定义类型对象进行对比操作
#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    Person(string name , int age):P_age(age),P_name(name)
    {
        ;
    }
    //重载==运算符
    bool operator==(const Person& p)
    {
        if(this->P_name == p.P_name && this->P_age == p.P_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator!=(const Person& p)
    {
        if(this->P_name != p.P_name || this->P_age != p.P_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
private:
    string P_name;
    int P_age;
};

void test01()
{
    Person p1("TOM" , 18);
    Person p2("TOM" , 19);
    if(p1 == p2)
    {
        cout << "p1和p2是相等的!" << endl;
    }
    else
    {
        cout << "p1和p2不相等!" << endl;
    }
    if(p1 != p2)
    {
        cout << "p1和p2不相等!" << endl;
    }
    else
    {
        cout << "p1和p2是相等的!" << endl;
    }
}
int main()
{
    test01();
    return 0;
}