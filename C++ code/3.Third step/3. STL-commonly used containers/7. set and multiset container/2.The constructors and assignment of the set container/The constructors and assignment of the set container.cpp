// #### 3.9.2  map构造和赋值

// 功能描述：
    // 对map容器进行构造和赋值操作

// 函数原型：

    // 构造：
        // map<T1, T2> mp;                    //map默认构造函数: 
        // map(const map &mp);                //拷贝构造函数

    // 赋值：
        // map& operator=(const map &mp);    //重载等号操作符

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


void test01()
{
    set<int> s1;

    //插入数据 只有 insert 方式
    s1.insert(10);  
    s1.insert(30);      
    s1.insert(20); 
    s1.insert(40);    
    s1.insert(30);

    //遍历容器
    //set 容器的特点:
    //1.所有元素插入的时候自动被排序
    //2.set 容器不允许插入重复的值
    Print_Set(s1);

    //拷贝构造:
    set<int> s2(s1);
    Print_Set(s2);
    
    //赋值:
    set<int> s3;
    s3 = s2;
    Print_Set(s3);
}


int main()
{
    test01();
    return 0;
}

