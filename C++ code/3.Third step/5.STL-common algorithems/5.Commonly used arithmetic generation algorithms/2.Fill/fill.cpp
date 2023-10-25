// fill

// 功能描述：
    // 将容器区间内元素填充为 指定的值

// 函数原型：
    // fill(iterator beg, iterator end, value);  

  // 向容器中填充元素

  // beg 开始迭代器

  // end 结束迭代器

  // value 填充的值

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.resize(10);

    fill(v.begin() , v.end() , 100);

    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;
}
int main()
{
    test01();
    return 0;
}
