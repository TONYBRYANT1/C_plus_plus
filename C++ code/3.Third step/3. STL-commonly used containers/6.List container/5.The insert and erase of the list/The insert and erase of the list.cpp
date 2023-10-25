// 3.7.5 list 插入和删除

// 功能描述：

// 对list容器进行数据的插入和删除



// 函数原型:

// push_back(elem);//在容器尾部加入一个元素
// pop_back();//删除容器中最后一个元素
// push_front(elem);//在容器开头插入一个元素
// pop_front();//从容器开头移除第一个元素
// insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
// insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
// insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
// clear();//移除容器的所有数据
// erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
// erase(pos);//删除pos位置的数据，返回下一个数据的位置。
// remove(elem);//删除容器中所有与elem值匹配的元素。

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

    //尾插
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //头插
    L1.push_front(100);
    L1.push_front(200);
    L1.push_front(300);
    L1.push_front(400);

    Print_List(L1);

    //尾删
    L1.pop_back();
    Print_List(L1);

    //头删
    L1.pop_front();
    Print_List(L1);

    //insert插入
    L1.insert(L1.begin() , 101);
    Print_List(L1);

    L1.insert(L1.end() , 202);
    Print_List(L1);

    list<int>::iterator it = L1.begin();
    L1.insert(++it , 101010);
    Print_List(L1);

    //删除
    it = L1.begin();//当数据发生改变时 , 在次使用 it 需要重新赋值
    L1.erase(it++);
    Print_List(L1);

    //移除
    L1.push_back(300);
    L1.push_back(300);
    L1.push_back(300);
    L1.push_back(300);
    Print_List(L1);

// remove(elem);//删除容器中所有与elem值匹配的元素。
    L1.remove(300);
    Print_List(L1);



}

int main()
{
    test01();
    return 0;
}