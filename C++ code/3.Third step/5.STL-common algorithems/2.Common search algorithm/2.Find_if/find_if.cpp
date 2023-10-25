// find_if

// 功能描述：

// 按条件查找元素

// 函数原型：

// find_if(iterator beg, iterator end, _Pred);  

  // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

  // beg 开始迭代器

  // end 结束迭代器

  // _Pred 函数或者谓词（返回bool类型的仿函数）

#include<bits/stdc++.h>
using namespace std;

void Print_Vector_Int(const vector<int> & v)
{
    for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

class MyFind
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
public:
};
//查找内置数据类型
void test01()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    Print_Vector_Int(v);
    vector<int>::iterator it = find_if(v.begin() , v.end() , MyFind());
    if(it == v.end())
    {
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了,数值为:" << *it << endl;
    }

}

//查找自定义数据类型
class Person
{
public:
    Person(string name , int age)
    {
        this->P_Name = name;
        this->P_Age = age;
    }
public:
    string P_Name;
    int P_Age;
};

class MyGreator
{
public:
    bool operator()(const Person& p)
    {
        return p.P_Age > 20;
    }
public:
};

void test02()
{
    vector<Person> v;
    Person p1("aaa" , 10);
    Person p2("bbb" , 20);
    Person p3("ccc" , 30);
    Person p4("ddd" , 40);
    Person p5("eee" , 50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator it = find_if(v.begin() , v.end() , MyGreator());
    if(it == v.end())
    {
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了 , 名字: " << it->P_Name << "   年龄: " << it->P_Age << endl;
    }

}

int main()
{
    test01();
    test02();
    return 0;
}
