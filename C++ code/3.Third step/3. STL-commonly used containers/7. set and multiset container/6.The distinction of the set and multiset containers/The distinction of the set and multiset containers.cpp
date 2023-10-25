// 3.8.6 set和multiset区别

// 学习目标：
    // 掌握set和multiset的区别

// 区别：
    // set不可以插入重复数据，而multiset可以
    // set插入数据的同时会返回插入结果，表示插入是否成功
    // multiset不会检测数据，因此可以插入重复数据

#include<bits/stdc++.h>
using namespace std;

void Print_Set(const set<int>& s)
{
    for(set<int>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void Print_Multiset(const multiset<int>& m)
{
    for(multiset<int>::const_iterator it = m.begin() ; it != m.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//set
void test01()
{
    set<int> s1;
    pair<set<int>::iterator , bool> ret = s1.insert(10);
    if(ret.second == 1)
    {
        cout << "10 的第一次插入 成功" << endl;
    }
    else
    {
        cout << "10 的第一次插入 失败" << endl;
    }

    cout << endl;

    ret = s1.insert(10);
    if(ret.second == 1)
    {
        cout << "10 的第二次插入 成功" << endl;
    }
    else
    {
        cout << "10 的第二次插入 失败" << endl;
    }

    cout << endl;

    Print_Set(s1);
    
}

//multiset
void test02()
{
    multiset<int> m1;
    m1.insert(10);
    m1.insert(10);
    m1.insert(10);
    m1.insert(10);

    Print_Multiset(m1);
}

int main()
{
    cout << "set:" << endl;
    test01();
    cout << "----------------------" << endl;

    cout << "multiset:" << endl;
    cout << endl;
    test02();
    return 0;
}