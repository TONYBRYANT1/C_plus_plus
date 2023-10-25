// reverse

// 功能描述：
    // 将容器内元素进行反转

// 函数原型：
    // reverse(iterator beg, iterator end);  

  // 反转指定范围的元素

  // beg 开始迭代器

  // end 结束迭代器

#include<bits/stdc++.h>
using namespace std;

void MyCompare(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);

    //原始
    cout << "初始:" << endl;
    for_each(v.begin() , v.end() , MyCompare);
    cout << endl;

    //反转
    reverse(v.begin() , v.end());

    //反转后
    cout << "反转后:" << endl;
    for_each(v.begin() , v.end() , MyCompare);
    cout << endl;


}
int main()
{
    test01();
    return 0;
}