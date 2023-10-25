// binary_search

// 功能描述：
//     查找指定元素是否存在

// 函数原型：
//     bool binary_search(iterator beg, iterator end, value);  

  // 查找指定的元素，查到 返回true  否则false

  // 注意:  在无序序列中不可用 

  // beg 开始迭代器

  // end 结束迭代器

  // value 查找的元素

#include<bits/stdc++.h>
using namespace std;

class MyCompare
{
public:
    bool operator()(int v1 , int v2)
    {
        return v1 > v2;
    }
public:
};

void Print_Vector_Int(const vector<int>& v)
{
    for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    
    //排序前:
    cout << "排序前:" << endl;
    Print_Vector_Int(v);

    sort(v.begin() , v.end() , MyCompare());

    //排序后:
    cout << "排序后:" << endl;
    Print_Vector_Int(v);

    //使用 binary_search 时 容器内的元素必须要有序
    bool ret = binary_search(v.begin() , v.end() , 2);
    cout << endl;
    if(ret == true)
    {
        cout << "有" << endl;
    }
    else
    {
        cout << "无" << endl;
    }


}
int main()
{
    test01();
    return 0;
}

