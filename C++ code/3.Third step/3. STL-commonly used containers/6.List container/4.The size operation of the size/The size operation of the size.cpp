// 3.7.4 list 大小操作

// 功能描述：
    // 对list容器的大小进行操作

// 函数原型：
    // size();                              //返回容器中元素的个数

    // empty();                             //判断容器是否为空

    // resize(num);                         //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。

    //   ​					                 //如果容器变短，则末尾超出容器长度的元素被删除。

    // resize(num, elem);                   //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

    //   						            //如果容器变短，则末尾超出容器长度的元素被删除。

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

    //判断容器是否为空
    if(L1.empty() == 0)
    {
        cout << "L1 不为空" << endl;
        cout << "L1 的元素个数为: " << L1.size() << endl;
    }
    else
    {
        cout << "L1 为空" << endl;
    }

    //重新指定大小
    L1.resize(10 , 10000);
    Print_List(L1);

    L1.resize(2);
    Print_List(L1);

    L1.resize(3);
    Print_List(L1);


}

int main()
{
    test01();
    return 0;
}

