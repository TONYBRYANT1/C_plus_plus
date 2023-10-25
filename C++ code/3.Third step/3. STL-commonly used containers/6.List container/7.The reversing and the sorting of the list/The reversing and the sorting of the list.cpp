// 3.7.7 list 反转和排序

// 功能描述：
    // 将容器中的元素反转，以及将容器中的数据进行排序

// 函数原型：
    // reverse();     //反转链表    
    // sort();        //链表排序

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

bool MyCompare(int v1 , int v2)
{
    //降序: 让第一个数 > 第二个数
    return v1 > v2;
}

//反转
void test01()
{
    list<int> L1;
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);

    //反转前
    cout << "反转前" << endl;
    Print_List(L1);

    //反转
    L1.reverse();//reverse 是成员函数

    //反转后
    cout << "反转后" << endl;
    Print_List(L1);

}

//排序
void test02()
{
    list<int> L1;
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);

    //排序前
    cout << "排序前" << endl;
    Print_List(L1);

    //排序
    //所有不支持随机访问迭代器的容器 , 不可以用标准算法
    //不支持随机访问迭代器的容器 , 内部会提供对应的一些算法

    L1.sort(MyCompare);//sort 是成员函数


    //排序后
    cout << "排序后" << endl;
    Print_List(L1);
}

int main()
{
    //test01();
    test02();
    return 0;
}