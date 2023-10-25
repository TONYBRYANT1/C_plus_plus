//deque(双端数组)构造函数

// 功能描述：
    // deque容器构造

// 函数原型：
    // deque<T> deqT;                     //默认构造形式
    // deque(beg, end);                   //构造函数将[beg, end)区间中的元素拷贝给本身。
    // deque(n, elem);                    //构造函数将n个elem拷贝给本身。
    // deque(const deque &deq);           //拷贝构造函数

//当我们想让传入的deque容器对象不被修改 , 写为 const deque<int>& d 时 , 需要将迭代器写为只读的迭代器: iterator -> const_iterator

#include<bits/stdc++.h>
using namespace std;

void Print_Deque(const deque<int>& d)//当我们想让传入的deque容器对象不被修改 , 写为 const deque<int>& d 时 , 需要将迭代器写为只读的迭代器: iterator -> const_iterator
{
    for(deque<int>::const_iterator it = d.begin() ; it != d.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    // deque<T> deqT;                     //默认构造形式
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    Print_Deque(d1);

    // deque(beg, end);                   //构造函数将[beg, end)区间中的元素拷贝给本身。
    deque<int> d2(d1.begin() , d1.end());
    Print_Deque(d2);

    // deque(n, elem);                    //构造函数将n个elem拷贝给本身。
    deque<int> d3(10 , 100);
    Print_Deque(d3);

    // deque(const deque &deq);           //拷贝构造函数
    deque<int> d4(d3);
    Print_Deque(d4);



}

int main()
{
    test01();
    return 0;
}