// 3.3.4 deque大小操作

// 功能描述：

// 对deque容器的大小进行操作



// 函数原型：

// deque.empty();                           //判断容器是否为空

// deque.size();                            //返回容器中元素的个数

// deque.resize(num);                       //重新指定容器的长度为num,若容器变长，则以默认值填充新位置。

//   ​			                             //如果容器变短，则末尾超出容器长度的元素被删除。

// deque.resize(num, elem);                 //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。

//​                                          //如果容器变短，则末尾超出容器长度的元素被删除。

#include<bits/stdc++.h>
using namespace std;

void Print_Deque(const deque<int>& d)
{
    for(deque<int>::const_iterator it = d.begin() ; it != d.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for(int i=0 ; i<10 ; i++)
    {
        d1.push_back(i);
    }
    Print_Deque(d1);

    if(d1.empty() == 1)
    {
        cout << "d1 为空" << endl;
        cout << endl;
    }
    else
    {
        cout << "d1 不为空" << endl;
        //cout << "d1 的容量 = " << d1.     //deque没有容量的概念 --- 因为可以无限放数据
        cout << "d1 的大小 = " << d1.size() << endl;
        cout << endl;
    }

    d1.resize(15);
    Print_Deque(d1);
    cout << "d1 的大小 = " << d1.size() << endl;
    cout << endl;

    d1.resize(16 , 1);
    Print_Deque(d1);
    cout << "d1 的大小 = " << d1.size() << endl;
    cout << endl;

    d1.resize(5);
    Print_Deque(d1);
    cout << "d1 的大小 = " << d1.size() << endl;
    cout << endl;

} 

int main()
{
    test01();
    return 0;
}

  