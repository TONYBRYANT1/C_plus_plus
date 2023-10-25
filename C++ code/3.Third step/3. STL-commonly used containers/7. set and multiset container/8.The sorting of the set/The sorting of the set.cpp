// #### 3.8.8 set容器排序

// 学习目标：
    // set容器默认排序规则为从小到大，掌握如何改变排序规则

// 主要技术点：
    // 利用仿函数，可以改变排序规则

#include<bits/stdc++.h>
using namespace std;

//仿函数
class MyCompare
{
public:
    bool operator()(int v1 , int v2)
    {
        return v1 > v2;
    }
public:
};

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

class Person_Compare
{
public:
    bool operator()(const Person& p0 , const Person& p1)
    {
        return p0.P_Age > p1.P_Age;
    }
public:
};



void Print_Set1(const set<int>& s)
{
    for(set<int>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void Print_Person(const set<Person , Person_Compare>& s)
{
    for(set<Person , Person_Compare>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << "姓名: " << it->P_Name << "   年龄: " << it->P_Age << endl;
    }
}

void Print_Set2(const set<int,MyCompare>& s)
{
    for(set<int,MyCompare>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}




//set 存放内置内容
void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);

    Print_Set1(s1);

    //指定排序规则为从大到小:要在插入之前指定插入规则
    set<int , MyCompare> s2;//因为排序规则在参数类表中 , 所以 MyCompare 不能是函数名 , 而应该是类型名
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);
    s2.insert(50);

    Print_Set2(s2);
}

//set 存放自定义内容 : 先要指定排序规则
void test02()
{
    set<Person , Person_Compare> s1;

	Person p1("刘备", 35);
	Person p2("曹操", 45);
	Person p3("孙权", 40);
	Person p4("赵云", 25);
	
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

    Print_Person(s1);

}
int main()
{
    test01();
    test02();
    return 0;
}