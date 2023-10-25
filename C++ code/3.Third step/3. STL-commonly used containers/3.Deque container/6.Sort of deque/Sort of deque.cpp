// 3.3.7  deque 排序

    // 功能描述：
        // 利用算法实现对deque容器进行排序

    // 算法：   
        // sort(iterator beg, iterator end)  //对beg和end区间内元素进行排序

#include<bits/stdc++.h>
#include<deque> // 容器头文件
#include<algorithm> // 标准算法头文件
using namespace std;

void Print_Deque(const deque<int>& d)
{
    for(deque<int>::const_iterator it = d.begin() ; it != d.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    d1.push_back(5);
    d1.push_back(100);
    d1.push_back(1);
    d1.push_back(27);
    d1.push_back(0);
    cout << "排序前: ";
    Print_Deque(d1);

    //deque容器排序
    //对于 支持随机访问的迭代器 的 容器 ,都可以利用 sort 算法直接对其进行排序
    //vector容器也可以利用 sort 进行排序
    sort(d1.begin() , d1.end());
    cout << "排序后: ";
    Print_Deque(d1);


}

int main()
{
    test01();
    return 0;
}