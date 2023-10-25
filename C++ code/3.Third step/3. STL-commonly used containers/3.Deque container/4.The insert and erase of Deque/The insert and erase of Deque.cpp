// 3.3.5 deque 插入和删除

// 功能描述：
    // 向deque容器中插入和删除数据

// 函数原型：

    // 两端插入操作：
        // push_back(elem);          //在容器尾部添加一个数据
        // push_front(elem);        //在容器头部插入一个数据
        // pop_back();                   //删除容器最后一个数据
        // pop_front();                 //删除容器第一个数据

    // 指定位置操作：
        // insert(pos,elem);         //在pos位置插入一个elem元素的拷贝，返回新数据的位置。

        // insert(pos,n,elem);     //在pos位置插入n个elem数据，无返回值。

        // insert(pos,beg,end);    //在pos位置插入[beg,end)区间的数据，无返回值。

        // clear();                           //清空容器的所有数据

        // erase(beg,end);             //删除[beg,end)区间的数据，返回下一个数据的位置。

        // erase(pos);                    //删除pos位置的数据，返回下一个数据的位置。

//总结:插入和删除提供的位置都是迭代器

#include<bits/stdc++.h>
using namespace std;

void Print_Deque(deque<int>& d)
{
    for(deque<int>::iterator it = d.begin() ; it != d.end() ; it ++)
    {
        cout << *it << " ";
    }   
    cout << endl;
}

void test01()
{
    deque<int> d1;

    //尾差
    d1.push_back(10);
    d1.push_back(20);

    //头插
    d1.push_front(100);
    d1.push_front(200);

    Print_Deque(d1);

    //尾删
    d1.pop_back();
    Print_Deque(d1);

    //头删
    d1.pop_front();
    Print_Deque(d1);

    //insert插入
    //1.
    d1.insert(d1.begin() , 1000);
    Print_Deque(d1);

    //2.
    d1.insert(d1.begin() , 2 , 200);
    Print_Deque(d1);

    //3.
    deque<int> d2;
    d2.insert(d2.begin() , d1.begin() , d1.end());
    Print_Deque(d2);

}

void test02()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    Print_Deque(d1);
    //insert插入
    //1.
    d1.insert(d1.begin() , 1000);
    Print_Deque(d1);

    //2.
    d1.insert(d1.begin() , 2 , 200);
    Print_Deque(d1);

    //3.
    deque<int> d2;
    d2.insert(d2.begin() , d1.begin() , d1.end());
    Print_Deque(d2);
}

void test03()
{
    deque<int> d2;
    for(int i=0;i<10;i++)
    {
        d2.push_back(i);
    }
    Print_Deque(d2);
    //删除
    //1.erase 指针
    deque<int>::iterator it = d2.begin();
    it++;
    d2.erase(it);
    Print_Deque(d2);
    //it 初始化 为 begin() , 虽然it++ , 但是执行完一个erase之后 , it 又会变为 begin() (重启了一样)
    //2.erase 区间
    d2.erase(it+1 , d2.end());
    Print_Deque(d2);

    //2.clear 全盘清空
    d2.clear();
    Print_Deque(d2);

}

int main()
{
    //test01();
    test02();
    //test03();
    return 0;
}