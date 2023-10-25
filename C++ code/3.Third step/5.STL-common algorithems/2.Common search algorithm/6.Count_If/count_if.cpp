// 5.2.6 count_if

// 功能描述：

// 按条件统计元素个数

// 函数原型：

// count_if(iterator beg, iterator end, _Pred);  

  // 按条件统计元素出现次数

  // beg 开始迭代器

  // end 结束迭代器

  // _Pred 谓词

#include<bits/stdc++.h>
using namespace std;

//统计内置数据类型的元素个数
class MyStandard1
{
public:
    bool operator()(int val)
    {
        return val > 20;
    }
public:
};

void test01()
{
    vector<int> v;

    v.push_back(20);
    v.push_back(20);
    v.push_back(50);//
    v.push_back(40);//
    v.push_back(30);//
    v.push_back(20);
    v.push_back(10);

    int num = count_if(v.begin() , v.end() , MyStandard1());
    cout << "大于 20 的数据有: " << num << " 个" << endl;

}

//统计自定义类型数据的元素个数 
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
public:
    string P_Name;
    int P_Age;
};

class MyStandard2
{
public:
    bool operator()(const Person& p)
    {
        return p.P_Age > 10;
    }
public:
};

void test02()
{
    vector<Person> v;

    Person p1("aaa" , 10);
    Person p2("bbb" , 20);//
    Person p3("ccc" , 20);//
    Person p4("ddd" , 30);//
    Person p5("eee" , 10);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count_if(v.begin() , v.end() , MyStandard2());
    cout << "年龄大于 10 的元素有: " << num << " 个" << endl;

}

int main()
{
    //test01();
    test02();
    return 0;
}