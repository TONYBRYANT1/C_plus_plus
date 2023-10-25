// set_intersection

// 功能描述：
    // 求两个容器的交集

// 函数原型：
    // - set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

  // 求两个集合的交集

  // 注意:两个集合必须是有序序列

  // beg1 容器1开始迭代器
  // end1 容器1结束迭代器
  // beg2 容器2开始迭代器
  // end2 容器2结束迭代器
  // dest 目标容器开始迭代器

//set_intersection 的 返回值 是 交集中的最后一个元素的位置


#include<bits/stdc++.h>
using namespace std;

void Print_Vector_Int(const vector<int> v)
{
    for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void Print_Vector_Int(const vector<int> v , vector<int>::iterator Endit)
{
    for(vector<int>::const_iterator it = v.begin() ; it != Endit ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

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

    //目标容器需要提前开辟空间
    //最特殊情况: 大容器 包含 小容器 , 则 目标容器 取 小容器的size
    Target_v.resize(v1.size() < v2.size() ? v1.size() : v2.size()); //    Target_v.resize( min(v1.size() , v2.size()) );

    //set_intersection 的 返回值 是 交集中的最后一个元素的位置
    vector<int>::iterator Endit = set_intersection(v1.begin() , v1.end() , v2.begin() , v2.end() , Target_v.begin());

    cout << "v1:" << endl;
    Print_Vector_Int(v1);

    cout << "v2:" << endl;
    Print_Vector_Int(v2);

    cout << "v3:" << endl;
    for_each(Target_v.begin() , Endit , MyPrint);
    cout << endl;
    Print_Vector_Int(Target_v , Endit); // ------------------------------------------------------------------------------------------------ 有问题

}

int main()
{
    test01();
    return 0;
}
