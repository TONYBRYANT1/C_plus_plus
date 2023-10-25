// 3.7.6 list 数据存取

//由于容器结构的缘故 , list容器不能进行跳跃式访问 和 下标访问
//不可以用 [] / .at() 来访问元素
//原因是 list 的本质是链表 , 不是用连续线性空间存储数据的 , 迭代器也是不支持随机访问的

// 功能描述：
    // 对list容器中数据进行存取

// 函数原型：
    // front();         //返回第一个元素。
    // back();          //返回最后一个元素。

#include<bits/stdc++.h>
using namespace std;

void Print_List(const list<int>& L)
{
    for(list<int>::const_iterator it = L.begin() ; it != L.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}



void test01()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    Print_List(L1);

    //不可以用 [] / .at() 来访问元素
    //原因是 list 的本质是链表 , 不是用连续线性空间存储数据的 , 迭代器也是不支持随机访问的
    
    //验证叠加器是不能随机访问的:
    list<int>::iterator it = L1.begin();
    //支持双向:
    it++;
    it--;
    //不支持随机访问:
    //it = it + 1;(X) 因为可以 +1 就可以 +3 


    //第一个元素为
    cout << "第一个元素为: " << L1.front() << endl;

    //最后一个元素为
    cout << "最后一个元素为: " << L1.back() << endl;



}

int main()
{
    test01();
    return 0;
}

