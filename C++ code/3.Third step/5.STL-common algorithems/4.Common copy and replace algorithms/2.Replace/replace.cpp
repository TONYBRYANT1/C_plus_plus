// replace

// 功能描述：
//     将容器内指定范围的旧元素修改为新元素

// 函数原型：
//     replace(iterator beg, iterator end, oldvalue, newvalue);  

  // 将区间内旧元素 替换成 新元素

  // beg 开始迭代器

  // end 结束迭代器

  // oldvalue 旧元素

  // newvalue 新元素

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "初始:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

    replace(v.begin() , v.end() , 20 , 2000);

    cout << "replace 后:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

}

int main()
{
    test01();
    return 0;
}