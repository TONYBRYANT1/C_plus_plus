// replace_if

// 功能描述:  
    // 将区间内满足条件的元素，替换成指定元素

// 函数原型：
    // replace_if(iterator beg, iterator end, _pred, newvalue);  

  // 按条件替换元素，满足条件的替换成指定元素

  // beg 开始迭代器

  // end 结束迭代器

  // _pred 谓词

  // newvalue 替换的新元素

//replace_if 按条件查找 可以利用仿函数灵活地筛选满足条件的元素 并执行想要的操作

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

class MyStandard
{
public:
    bool operator()(int val)
    {
        return val > 20;
    }
public:
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(20);
    v.push_back(10);

    //初始
    cout << "初始:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

    //replace_if
    replace_if(v.begin() , v.end() , MyStandard() , 0);

    //replace_if 后
    cout << "replace_if 后:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

}
int main()
{
    test01();
    return 0;
}