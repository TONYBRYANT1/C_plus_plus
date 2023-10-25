//set 的插入和删除操作
#include<bits/stdc++.h>
using namespace std;

void Print_Set(const set<int>& s)
{
    for(set<int>::const_iterator it = s.begin() ; it != s.end() ; it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
}

void test01()
{
    set<int> s1;
    
    //插入
    s1.insert(40);
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);

    //遍历
    Print_Set(s1);

    //删除
    s1.erase(s1.begin());
    Print_Set(s1);

    //删除的重载版本
    s1.erase(40);
    Print_Set(s1);

    //清空
    // s1.erase(s1.begin() , s1.end());
    // Print_Set(s1);
    //or
    s1.clear();
    Print_Set(s1);

}

int main()
{
    test01();
    return 0;
}