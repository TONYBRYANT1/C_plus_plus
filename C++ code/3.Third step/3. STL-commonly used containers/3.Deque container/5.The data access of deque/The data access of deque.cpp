// 3.3.6 deque 数据存取

// 功能描述：
    // 对deque 中的数据的存取操作

// 函数原型：
    // at(int idx);         //返回索引idx所指的数据
    // operator[];          //返回索引idx所指的数据
    // front();             //返回容器中第一个数据元素
    // back();              //返回容器中最后一个数据元素

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }

    //1.通过[]方式访问元素
    for(int i=0;i<d1.size();i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;

    //2.通过at的当时来访问元素
    for(int i=0;i<d1.size() ; i++)
    {
        cout << d1.at(i) << " ";
    }
    cout << endl;

    //3.访问第一个和最后一个元素
    cout << "第一个元素为: " << d1.front() << endl;
    cout << "最后一个元素为: " << d1.back() << endl;
}

int main()
{
    test01();
    return 0;
}