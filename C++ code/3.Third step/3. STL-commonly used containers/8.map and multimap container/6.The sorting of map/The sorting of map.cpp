//map容器排序

// 学习目标：
    // - map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则

// 主要技术点:
    // - 利用仿函数，可以改变排序规则

#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    Person(string name , int age)
    {
        P_Name = name;
        P_Age = age;
    }
public:
    string P_Name;
    int P_Age;
};

class Map_Compare1
{
public:
    bool operator()(int m1 ,int m2)
    {
        
        return m1 > m2;
    }
public:
};

class Map_Compare2
{
public:
    bool operator()(const Person& p1 , const Person& p2)
    {
        //按照年龄降序:
        return p1.P_Age > p2.P_Age;
    }
public:
};

void Print_Map1(const map<int ,int , Map_Compare1>& m)
{
    for(map<int ,int , Map_Compare1>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << "key: " << it->first << "   value: " << it->second << endl;
    }
    cout << endl;
}

void Print_Map2(const map<Person,int,Map_Compare2>& m)
{
    for(map<Person,int,Map_Compare2>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << "姓名: " << (it->first).P_Name << "   年龄: " << (it->first).P_Age << "   序号: " << it->second << endl;
    }
    cout << endl;
}

//内置类型
void test01()
{
    map<int , int , Map_Compare1> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));

    Print_Map1(m);

}

//自定义类型
void test02()
{
    map<Person,int,Map_Compare2> m;
    Person p1("刘备", 35);
	Person p2("曹操", 45);
	Person p3("孙权", 40);
	Person p4("赵云", 25);

    m.insert(pair<Person , int>(p1,1));
    m.insert(pair<Person , int>(p2,2));
    m.insert(pair<Person , int>(p3,3));
    m.insert(pair<Person , int>(p4,4));

    Print_Map2(m);

}

int main()
{
    //test01();
    test02();
    return 0;
}