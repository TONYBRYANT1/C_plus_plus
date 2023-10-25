// count

// 功能描述：
//     统计元素个数

// 函数原型：
//     count(iterator beg, iterator end, value);  

  // 统计元素出现次数

  // beg 开始迭代器

  // end 结束迭代器

  // value 统计的元素

//当统计自定义类型的元素个数时 , 需要重载 operator==() , 不然 count 底层 不知道怎么对比

#include<bits/stdc++.h>
using namespace std;

//统计内置数据类型的元素个数
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(30);
    v.push_back(10);//
    v.push_back(10);//
    v.push_back(10);//
    v.push_back(10);//
    v.push_back(0);
    v.push_back(90);
    v.push_back(10);//
    v.push_back(10);//

    int num = count(v.begin() , v.end() , 10);
    cout << "40的元素个数为: " << num << " 个" << endl;

}

//统计自定义数据类型的元素个数

class Person
{
public:
    Person(string name , int age)
    {
        P_Name = name;
        P_Age = age;
    }
    bool operator==(const Person& p)
    {
        if(this->P_Age == p.P_Age)
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

void test02()
{
    vector<Person> v;
    Person p1("aaa" , 10);
    Person p2("bbb" , 20);
    Person p3("ccc" , 10);
    Person p4("ddd" , 70);
    Person p5("eee" , 10);

    Person p("fff" , 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count(v.begin() , v.end() , p);
    cout << "与 p 年龄相同的元素有: " << num << " 个" << endl;

}

int main()
{
    //test01();
    test02();
    return 0;
}