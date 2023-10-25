// merge

// 功能描述：
    // 两个容器元素合并，并存储到另一容器中

// 函数原型：
    // merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  

  // 容器元素合并，并存储到另一容器中

  // 注意: 两个容器必须是  有序的

  // beg1   容器1开始迭代器
  // end1   容器1结束迭代器
  // beg2   容器2开始迭代器
  // end2   容器2结束迭代器
  // dest   目标容器开始迭代器

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i=0,j=9 ; i<10 , j>=0; i++,j--)
    {
        v1.push_back(i);
        v2.push_back(j);
    }

    //v1:
    cout << "v1:" << endl;
    for_each(v1.begin() , v1.end() , MyPrint);
    cout << endl;
    //v2:
    cout << "v2:" << endl;
    for_each(v2.begin() , v2.end() , MyPrint);
    cout << endl;

    //合并
    // 注意: 两个容器必须是  有序的
    vector<int> v3;
    //v3 是空的 不能直接存放数据
    //提前给目标容器分配空间
    v3.resize(v1.size() + v2.size());
    //开始合并
    merge(v1.begin() , v1.end() , v2.begin() , v2.end() , v3.begin());

    //v3:
    cout << "v3:" << endl;
    for_each(v3.begin() , v3.end() , MyPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}