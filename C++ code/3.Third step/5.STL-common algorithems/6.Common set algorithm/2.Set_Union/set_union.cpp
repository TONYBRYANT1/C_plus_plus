// set_union

// 功能描述：
//     求两个集合的并集

// 函数原型：
//     - set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  

  // 求两个集合的并集

  // 注意:两个集合必须是有序序列

  // beg1 容器1开始迭代器
  // end1 容器1结束迭代器
  // beg2 容器2开始迭代器
  // end2 容器2结束迭代器
  // dest 目标容器开始迭代器

//set_union 的 返回值 是 并集中的最后一个元素的位置


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
    //目标容器需要开辟空间
    //最特殊的情况 两个容器没有交集 , 并集就是两个容器的 size 相加
    Target_v.resize(v1.size() + v2.size());

    vector<int>::iterator Endit = set_union(v1.begin() , v1.end() , v2.begin() , v2.end() , Target_v.begin());

    for_each(v1.begin() , v1.end() , MyPrint);
    cout << endl;

    for_each(v2.begin() , v2.end() , MyPrint);
    cout << endl;

    for_each(Target_v.begin() , Endit , MyPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}