// find

// 功能描述：
    // 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()

// 函数原型：   
    // find(iterator beg, iterator end, value);  

// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

// beg 开始迭代器

// end 结束迭代器

// value 查找的元素

//1.查找内置数据类型 --- 可以直接 find()
//2.查找自定义数据类型 --- 要重构 ==operator() 要让 find()知道你要怎么对比

#include<bits/stdc++.h>

using namespace std;

//find

//查找 内置数据类型
// void test01()
// {
//     vector<int> v;
//     for(int i=0;i<10;i++)
//     {
//         v.push_back(i);
//     }

//     //查找 容器中 是否有 5 这个元素
//     vector<int>::iterator it = find(v.begin() , v.end() , 50);
//     if(it == v.end())
//     {
//         cout << "没找到" << endl;
//     }
//     else
//     {
//         cout << "找到了 , 元素为:" << *it << endl;
//     }
// }

//查找 自定义的数据类型

class Person
{
public:
    Person()
    {
        ;
    }
    Person(string name , int age)
    {
        this->P_Name = name;
        this->P_Age = age;
    }
    //重载 == 底层find知道如何对比 Person 数据类型
    bool operator==(const Person& p)
    {
        if(this->P_Name == p.P_Name && this->P_Age == p.P_Age)
        {
            return true;
        }
        else
        {
            return false; 
        }
    }
public:
    string P_Name;
    int P_Age;
};

void SetPerson(vector<Person>& v)
{
    string Person_Seed = "ABCDE";
    for(int i=0;i<5;i++)
    {
        int age = rand()%11 + 10;
        string name = "同学";
        name += Person_Seed[i];
        Person p(name , age);
        v.push_back(p);
    }
}

void Print_Person(const vector<Person>& v)
{
    for(vector<Person>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << "姓名: " << it->P_Name << "   年龄: " << it->P_Age << endl; 
    }
}

void test02()
{
    //srand((unsigned int) time (NULL));
    vector<Person> v;
    Person p1("海绵宝宝" , 7);
    Person p2("派大星" , 8);
    Person P3("bbb",20);
    v.push_back(p1);
    v.push_back(p2);
    SetPerson(v);//没啥用
    Print_Person(v);
    
    vector<Person>::iterator it = find(v.begin() , v.end() , p1);
    if(it == v.end())
    {
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了 " << "姓名: " << it->P_Name << "   年龄: " << it->P_Age << endl;
    }
}

int main()
{
    //test01();
    test02();
    return 0;
}