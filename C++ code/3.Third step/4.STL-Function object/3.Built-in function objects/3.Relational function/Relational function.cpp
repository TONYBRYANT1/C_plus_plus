// 关系仿函数

// 功能描述：
    // 实现关系对比

// 仿函数原型:
    // template<class T> bool equal_to<T>               //等于
    // template<class T> bool not_equal_to<T>           //不等于
    // template<class T> bool greater<T>                //大于
    // template<class T> bool greater_equal<T>          //大于等于
    // template<class T> bool less<T>                   //小于
    // template<class T> bool less_equal<T>             //小于等于

#include<bits/stdc++.h>
using namespace std;

class MyCompare
{
public:
    bool operator()(int v1 , int v2)
    {
        return v1 > v2;
    }
public:
};

void Print_Vector(const vector<int>& v)
{
    for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


//内建函数对象 关系仿函数
//大于  greater
void test01()
{
    vector<int> v; 
    v.push_back(10);
    v.push_back(50);
    v.push_back(30);
    v.push_back(70);
    v.push_back(20);

    //原
    cout << "初始:" << endl;
    Print_Vector(v);

    //降序
    cout << "降序:" << endl;
    sort(v.begin() , v.end() , MyCompare());
    Print_Vector(v);

    //利用 greater 仿函数模版
    cout << "利用 greater --- 内置仿函数模版 降序:" << endl;
    sort(v.begin() , v.end() , greater<int>());
    Print_Vector(v);
    
}
int main()
{
    test01();
    return 0;
}