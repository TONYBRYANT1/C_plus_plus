// sort

// 功能描述：
    // 对容器内元素进行排序

// 函数原型：
    // sort(iterator beg, iterator end, _Pred);  

  // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置

  //  beg    开始迭代器

  //  end    结束迭代器

  // _Pred  谓词

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

class MyStandard
{
public:
    bool operator()(int v1 , int v2)
    {
        return v1 > v2;
    }
public:
};

void test01()
{
    vector<int> v;

    v.push_back(40);
    v.push_back(50);
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);

    //原来
    cout << "初始:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

    //利用 sort 进行升序
    cout << "升序:" << endl;
    sort(v.begin() , v.end());
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

    //利用 sort 进行降序
    cout << "降序:" << endl;
    sort(v.begin() , v.end() , MyStandard());
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

}

int main()
{
    test01();
    return 0;
}

