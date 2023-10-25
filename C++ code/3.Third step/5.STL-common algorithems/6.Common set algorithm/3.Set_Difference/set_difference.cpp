// set_difference

// 功能描述：
    // 求两个集合的差集

// 函数原型：
    // - set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  

  // 求两个集合的差集

  // **注意:两个集合必须是有序序列**

  // beg1 容器1开始迭代器
  // end1 容器1结束迭代器
  // beg2 容器2开始迭代器
  // end2 容器2结束迭代器
  // dest 目标容器开始迭代器

//set_difference 的 返回值 是 差集中的最后一个元素的位置


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

    for(int i=0;i<10;i++)
    {
        v1.push_back(i); // 0 ~ 9
        v2.push_back(i+5); // 5 ~ 14
    }

    vector<int> Target_v;
    Target_v.resize( max(v1.size() , v2.size()) );

    //v1
    cout << "v1:" << endl;
    for_each(v1.begin() , v1.end() , MyPrint);
    cout << endl;

    //v2
    cout << "v2:" << endl;
    for_each(v2.begin() , v2.end() , MyPrint);
    cout << endl;

    
    //v1 和 v2 的 差集
    cout << "v1 与 v2 的 差集:" << endl;
    vector<int>::iterator Endit_first = set_difference(v1.begin() , v1.end() , v2.begin() , v2.end() , Target_v.begin());
    cout << "Target_v:" << endl;
    for_each(Target_v.begin() , Endit_first , MyPrint);
    cout << endl;
    //v2 和 v1 的 差集
    cout << "v2 与 v1 的 差集:" << endl;
    vector<int>::iterator Endit_second = set_difference(v2.begin() , v2.end() , v1.begin() , v1.end() , Target_v.begin());
    cout << "Target_v:" << endl;
    for_each(Target_v.begin() , Endit_second , MyPrint);
    cout << endl;
    
}

int main()
{
    test01();
    return 0;
}