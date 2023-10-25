// 3.9.2  map构造和赋值

// 功能描述：

// 对map容器进行构造和赋值操作

// 函数原型：

// 构造：

// map<T1, T2> mp;                     //map默认构造函数: 
// map(const map &mp);             //拷贝构造函数



// 赋值：

// map& operator=(const map &mp);    //重载等号操作符


#include<bits/stdc++.h>
using namespace std;

void Print_Map(const map<int , int>& m)
{
    for(map<int , int>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << "key: " << (*it).first << "   value: " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    //默认构造
    map<int , int> m1;
    m1.insert(pair<int , int>(1 , 10));
    m1.insert(pair<int , int>(3 , 30));
    m1.insert(pair<int , int>(2 , 20));
    m1.insert(pair<int , int>(4 , 40));

    Print_Map(m1);

    //拷贝构造
    map<int , int> m2(m1);
    Print_Map(m2);

    //赋值
    map<int , int> m3;
    m3 = m2;
    Print_Map(m3);
}


int main()
{
    test01();
    return 0;

}
