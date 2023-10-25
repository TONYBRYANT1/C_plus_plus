//vector的赋值操作

// 功能描述：
    // 给vector容器进行赋值

// 函数原型：
    // vector& operator=(const vector &vec);//重载等号操作符
    // assign(beg, end);       //将[beg, end)区间中的数据拷贝赋值给本身。
    // assign(n, elem);        //将n个elem拷贝赋值给本身。

#include<bits/stdc++.h>
using namespace std;

void Print_Vector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for(int i=0 ;i<10;i++)
    {
        v1.push_back(i);
    }
    Print_Vector(v1);

    // vector& operator=(const vector &vec);//重载等号操作符
    vector<int> v2;
    v2 = v1;
    Print_Vector(v2);

    // assign(beg, end);       //将[beg, end)区间中的数据拷贝赋值给本身。
    vector<int> v3;
    v3.assign(v1.begin() , v1.end());
    Print_Vector(v3);

    // assign(n, elem);        //将n个elem拷贝赋值给本身。
    vector<int> v4;
    v4.assign(10 , 100);
    Print_Vector(v4);

}

int main()
{
    test01();
    return 0;
}