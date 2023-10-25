// 功能描述：
    // 统计map容器大小以及交换map容器

// 函数原型：
    // size();          //返回容器中元素的数目
    // empty();         //判断容器是否为空
    // swap(st);        //交换两个集合容器

#include<bits/stdc++.h>
using namespace std;

void Print_Map(const map<int , int>& m)
{
    for(map<int , int>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << "key: " << it->first << "   value: " << it->second << endl;
    }
    cout << endl;
}



//大小
void test01()
{
    map<int , int> m;
    m.insert(pair<int , int>(1 , 10));
    m.insert(pair<int , int>(2 , 20));
    m.insert(pair<int , int>(3 , 30));
    m.insert(pair<int , int>(4 , 40));

    if(m.empty() == 1)
    {
        cout << "m为空" << endl;
    }
    else
    {
        cout << "m不为空" << endl;
        cout << "m的大小为: " << m.size() << endl;
    }
}

//交换
void test02()
{
    map<int , int> m1;
    m1.insert(pair<int , int>(1 , 10));
    m1.insert(pair<int , int>(2 , 20));
    m1.insert(pair<int , int>(3 , 30));
    m1.insert(pair<int , int>(4 , 40));

    map<int , int> m2;
    m2.insert(pair<int , int>(5 , 50));
    m2.insert(pair<int , int>(6 , 60));
    m2.insert(pair<int , int>(7 , 70));
    m2.insert(pair<int , int>(8 , 80));

    //交换前:
    cout << "交换之前:" << endl;
    Print_Map(m1);
    Print_Map(m2);

    //交换:
    m1.swap(m2);
    cout << "-----------------------------" << endl;

    //交换后
    cout << "交换之后:" << endl;
    Print_Map(m1);
    Print_Map(m2);

}

int main()
{
    //test01();
    test02();
    return 0;
}