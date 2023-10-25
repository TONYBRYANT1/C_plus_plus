// 3.9.4 map插入和删除

// 功能描述：
    // - map容器进行插入数据和删除数据

// 函数原型：
    // insert(elem);           //在容器中插入元素。
    // clear();                    //清除所有元素
    // erase(pos);              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
    // erase(beg, end);    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
    // erase(key);            //删除容器中值为key的元素。

#include<bits/stdc++.h>
using namespace std;

void Print_Map(const map<int , int>& m)
{
    for(map<int , int>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << "key: " << it->first << "   value: " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int , int> m;
    //插入
    //第一种
    m.insert(pair<int , int>(1,10));

    //第二种
    m.insert(make_pair(2,20));

    //第三种
    m.insert(map<int,int>::value_type(3,30));

    //第四种
    m[4] = 40;
    //cout << m[5] << endl;
    //如果写错了 --- 写成了 m[5] --> 编译器会自动生成 key:5   value:0
    //[] 不建议插入,用途: 可以利用 key 访问到 value:
    //cout << m[4] << endl;
    Print_Map(m);

    //删除
    //erase
    //1.
    m.erase(m.begin());
    Print_Map(m);

    //2.
    m.erase(3);
    Print_Map(m);

    //3.
    m.erase(m.begin() , m.end());
    Print_Map(m);
    //or
    m.clear();
}


int main()
{
    test01();
    return 0;
}
