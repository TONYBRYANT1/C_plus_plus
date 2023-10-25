// 3.7.3 list 赋值和交换

// 功能描述：

// 给list容器进行赋值，以及交换list容器

// 函数原型：

// assign(beg, end);                    //将[beg, end)区间中的数据拷贝赋值给本身。
// assign(n, elem);                     //将n个elem拷贝赋值给本身。
// list& operator=(const list &lst);    //重载等号操作符
// swap(lst);                           //将lst与本身的元素互换。

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

//赋值
void test01()
{
    list<int> L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    Print_List(L1);

    //利用 operator= 赋值
    list<int> L2;
    L2 = L1;
    Print_List(L2);

    //assign
    //1.
    list<int> L3;
    L3.assign(L2.begin() , L2.end());
    Print_List(L3);
    //2.
    list<int> L4;
    L4.assign(10 , 10000);
    Print_List(L4);
}

//交换
void test02()
{
    list<int> L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    list<int> L2;
    L2.assign(10 , 10000);

    //交换前:
    cout << "交换前" << endl;
    Print_List(L1);
    Print_List(L2);

    //交换
    L1.swap(L2);

    //交换后:
    cout << "交换后" << endl;
    Print_List(L1);
    Print_List(L2);
}


int main()
{
    //test01();
    test02();
    return 0;
}

