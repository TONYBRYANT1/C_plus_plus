//vector存放自定义数据类型
//学习目标:vector中存放自定义数据类型 , 并打印输出
#include<bits/stdc++.h>
#include<vector>
using namespace std;
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

void test01()
{
    //创建Person类容器
    vector<Person> v;
    Person p1("海绵宝宝" , 8);
    Person p2("派大星" , 6);
    Person p3("章鱼哥"  , 20);
    Person p4("蟹阿金" , 25);
    Person p5("珊迪" , 18);

    //用尾插法将对象加入到容器中
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //遍历容器中的数据
    // it -> Person p1(P_Name P_Age)
    for(vector<Person>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << "姓名: " << (*it).P_Name << "   年龄: " << (*it).P_Age << endl; //(*it)是Person类对象
        cout << "姓名: " << it->P_Name << "   年龄: " << it->P_Age << endl; //(*it)是Person类对象
    }

}

void test02()
{
    //创建Person类容器
    vector<Person*> v;
    Person p1("海绵宝宝" , 8);
    Person p2("派大星" , 6);
    Person p3("章鱼哥"  , 20);
    Person p4("蟹阿金" , 25);
    Person p5("珊迪" , 18);

    //用尾插法将对象(Person*)加入到容器中
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //遍历容器中的数据
    // it -> &p1 -> p1(P_Name P_Age)
    for(vector<Person*>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << "姓名: " << (*it)->P_Name << "   年龄: " << (*(*it)).P_Age << endl;
    }

}

int main()
{
    //test01();
    test02();
    return 0;
}