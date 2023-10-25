// 常用遍历算法

// 学习目标：
    // 掌握常用的遍历算法

// 算法简介：
    // for_each     //遍历容器
    // transform   //搬运容器到另一个容器中

#include<bits/stdc++.h>
using namespace std;

// 1.for_each
// 功能描述：
    // 实现遍历容器
// 函数原型：
    // for_each(iterator beg, iterator end, _func);  
// 遍历算法 遍历容器元素
// beg 开始迭代器
// end 结束迭代器
// _func 函数或者函数对象

//普通函数
void Print01(int val)
{
    cout << val << " ";
}

//仿函数
class MyPrint01
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
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    //for_each 遍历:
    //1.普通函数版本:
    for_each(v.begin() , v.end() , Print01);
    cout << endl;

    //2.仿函数版本:
    for_each(v.begin() , v.end() , MyPrint01());
    cout << endl;

}

int main()
{
    test01();
    return 0;
}
















