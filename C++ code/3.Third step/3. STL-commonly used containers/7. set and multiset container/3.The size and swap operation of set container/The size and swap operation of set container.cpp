// 3.9.3 map大小和交换

//不支持 resize

// 功能描述：
    // 统计map容器大小以及交换map容器

// 函数原型：
    // size();          //返回容器中元素的数目
    // empty();        //判断容器是否为空
    // swap(st);      //交换两个集合容器

#include<bits/stdc++.h>
using namespace std;

void Print_Set(const set<int> s)
{
    for(set<int>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


//大小
void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    Print_Set(s1);

    if(s1.empty() == 0)
    {
        cout << "s1 不为空" << endl;
        cout << "s1 的大小为: " << s1.size() << endl;
    }
    else
    {
        cout << "s1 为空" << endl;
    }

}

//交换
void test02()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int> s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);

    //交换前
    cout << "交换前" << endl;
    Print_Set(s1);
    Print_Set(s2);

    //交换
    s1.swap(s2);

    //交换后
    cout << "交换后" << endl;
    Print_Set(s1);
    Print_Set(s2);
}


int main()
{
    //test01();
    test02();
    return 0;
}