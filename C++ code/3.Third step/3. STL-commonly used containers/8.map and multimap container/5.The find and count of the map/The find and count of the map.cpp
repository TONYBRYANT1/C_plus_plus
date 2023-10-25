// 3.9.5 map查找和统计

// 功能描述：
    // - 对map容器进行查找数据以及统计数据

// 函数原型：
    // find(key);                  //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    // count(key);                //统计key的元素个数

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    //查找
    map<int , int> m;
    m.insert(pair<int , int>(1,10));
    m.insert(pair<int , int>(2,20));
    m.insert(pair<int , int>(3,30));
    m.insert(pair<int , int>(4,40));

    map<int , int>::iterator pos = m.find(5);

    if(pos != m.end())
    {
        cout << "找到了元素 key = " << (*pos).first << "   value = " << (*pos).second << endl;
    }
    else
    {
        cout << "没找到元素" << endl;
    }

    //统计
    //map 不允许插入重复的 key
    //对于 map.count 而言 值:1/0
    //对于 multimap.count 而言 值:可能大于 1
    int num = m.count(3);
    cout << "num = " << num << endl;

}

int main()
{
    test01();
    return 0;
}