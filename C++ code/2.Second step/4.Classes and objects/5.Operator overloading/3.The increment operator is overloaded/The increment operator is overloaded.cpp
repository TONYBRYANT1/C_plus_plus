//递增运算符重载
//作用:通过重载递增运算符,实现自己的整形数据
#include<bits/stdc++.h>
using namespace std;

//重载递增运算符
class Person
{
friend ostream& operator<<(ostream& cout , Person& p);
public:
    Person(int a)
    {
        age=a;
    }

    //重载前置++运算符重载  返回引用为了一直对一个数据进行递增
    Person& operator++()
    {
        (this->age)++;
        return *this;
    }
    //重载后置++运算符重载
    Person operator++(int)
    {
        //1.记录当时结果
        Person temp = *this;
        //2.递增
        (this->age)++;
        //3.将记录的结果返回
        return temp;
    }

private:
    int age;
};

//重载左移运算符
ostream& operator<<(ostream& out ,Person& p)//Person& p <==>Person* const p
{
    out << p.age;
    return out ;
}

void test01()
{
    Person p1(10);
    cout<< ++p1 << endl;
}

void test02()
{
    Person p2(20);
    Person p3=p2++;
    cout << p3 << endl;
    //cout << p2++ << endl;
    //ostream& operator<<(ostream& out ,Person& p)中的Person& p参数是引用,不能传右值,所以要想办法将p2++变成右值才行
}

int main()
{
    test01();
    test02();
    return 0;
}


