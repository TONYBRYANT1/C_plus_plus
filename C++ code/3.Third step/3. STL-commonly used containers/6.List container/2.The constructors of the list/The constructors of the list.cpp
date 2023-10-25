// 3.7.2  list构造函数

// 功能描述：
    // 创建list容器

// 函数原型：
    // list<T> lst;                              //list采用采用模板类实现,对象的默认构造形式：
    // list(beg,end);                            //构造函数将[beg, end)区间中的元素拷贝给本身。
    // list(n,elem);                             //构造函数将n个elem拷贝给本身。
    // list(const list &lst);                    //拷贝构造函数。

#include<bits/stdc++.h>
using namespace std;

void Print_List(const list<int>& L)
{
    for(list<int>::const_iterator it = L.begin() ; it != L.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


void test01()
{
    //创建List容器
    list<int> L1; //默认构造函数

    //添加数据
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //遍历容器
    Print_List(L1);

    //区间方式构造
    list<int> L2(L1.begin() , L1.end());
    Print_List(L2);

    //拷贝构造
    list<int> L3(L2);
    Print_List(L3);

    //n个elem
    list<int> L4(10 , 1000);
    Print_List(L4);

}

int main()
{
    test01();
    return 0;
}
