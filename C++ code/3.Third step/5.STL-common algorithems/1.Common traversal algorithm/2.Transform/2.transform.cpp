// transform
// 功能描述：
    // 搬运容器到另一个容器中
// 函数原型：
    // transform(iterator beg1, iterator end1, iterator beg2, _func);
//beg1 源容器开始迭代器
//end1 源容器结束迭代器
//beg2 目标容器开始迭代器
//_func 函数或者函数对象

#include<bits/stdc++.h>
using namespace std;

//仿函数
class Transform
{
public:
    int operator()(int val)
    {
        return val+100;
    }
public:
};

//仿函数
class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
public:
};

void test01()
{
    //原容器:
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    cout << "v1:" << endl;
    for_each(v.begin() , v.end() , MyPrint());
    cout << endl;

    //目标容器:
    vector<int> v2;
    v2.resize(v.size());//需要先开辟空间 , 再来搬运数据
    transform(v.begin() , v.end() , v2.begin() , Transform());
    cout << "v2:" << endl;
    for_each(v2.begin() , v2.end() , MyPrint());
}
int main()
{
    test01();
    return 0;
}