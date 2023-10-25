//set 的查找和统计

// 功能描述：
    // 对set容器进行查找数据以及统计数据

// 函数原型：
    // find(key);                 //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    // count(key);                //统计key的元素个数
#include<bits/stdc++.h>
using namespace std;

//查找
void test01()
{
    set<int> s1;
    s1.insert(20);
    s1.insert(10);
    s1.insert(50);
    s1.insert(40);

    //查找
    set<int>::iterator pos = s1.find(20);
    if(pos != s1.end())
    {
        cout << "找到元素: " << *pos << endl;
    }
    else
    {
        cout << "未找到元素: " << endl;
    }

}

//统计
void test02()
{
    set<int> s1;
    s1.insert(20);
    s1.insert(10);
    s1.insert(50);
    s1.insert(40);

    //统计
    int num = s1.count(100);
    cout << "num = " << num << endl;

}

int main()
{
    //test01();
    test02();
    return 0;
}