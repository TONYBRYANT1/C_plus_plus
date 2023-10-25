// 3.7.8 排序案例

// 案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高

// 排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    Person(string name , int age , int hight)
    {
        P_Name = name;
        P_Age = age;
        P_Height = hight;
    }
public:
    string P_Name;
    int P_Age;
    int P_Height;
};

void Print_List(const list<Person>& L)
{
    for(list<Person>::const_iterator it = L.begin() ; it != L.end() ; it++)
    {
        cout << "姓名: " << it->P_Name << " 年龄: " << it->P_Age << " 身高: " << it->P_Height << endl;
    }
}

//高级排序规则
bool Compare_Person(const Person& p1 , const Person& p2)
{
    
    if(p1.P_Age == p2.P_Age)
    {
        //年龄相同 按照身高降序排列
        //按照身高 降序:
        return p1.P_Height > p2.P_Height;
    }
    else
    {
        //按照年龄 升序:
        return p1.P_Age < p2.P_Age;
    }
}

void test01() 
{

	list<Person> L;

	Person p1("刘备", 35 , 175);
	Person p2("曹操", 45 , 180);
	Person p3("孙权", 40 , 170);
	Person p4("赵云", 25 , 190);
	Person p5("张飞", 35 , 160);
	Person p6("关羽", 35 , 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

    //排序前
    cout << "排序前 : " << endl;
    Print_List(L);

    cout << "----------------------------------" << endl;
    
    //排序
    L.sort(Compare_Person);

    //排序后
    cout << "排序后 : " << endl;
    Print_List(L);
}

int main()
{   
    test01();
    return 0;
}