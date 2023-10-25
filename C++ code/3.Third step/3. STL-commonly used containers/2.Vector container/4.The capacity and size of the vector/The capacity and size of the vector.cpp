//vector的容量和大小
// 功能描述：

// 对vector容器的容量和大小操作

// 函数原型：

// empty();                             //判断容器是否为空

// capacity();                      //容器的容量

// size();                              //返回容器中元素的个数

// resize(int num);             //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//   ​					         //如果容器变短，则末尾超出容器长度的元素被删除。

// resize(int num, elem);        //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//  ​				              //如果容器变短，则末尾超出容器长度的元素被删除

//总结: 
// 1.判断是否为空 --- empty
// 2.返回元素个数 --- size
// 3.返回容器容量 --- capacity
// 4.重新指定大小 --- resize

#include<bits/stdc++.h>
using namespace std;

//vector的容量和大小操作
void Print_Vector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    Print_Vector(v1);

    //首先判断容器是否为空
    if(v1.empty() == 1)
    {
        cout << "v1 为空" << endl;
    }
    else
    {
        cout << "v1 不为空" << endl;
        cout << "v1 的容量为: " << v1.capacity() << endl; // 16
        cout << "v1 的大小为: " << v1.size() << endl; // 10
    }

    //重新指定大小
    v1.resize(15);
    Print_Vector(v1);//如果重新指定的比原来长了 , 默认用 0 填充新的位置
    v1.resize(17,100);
    //二次重新指定大小:1.如果小于之前的大小,则会删去相应的元素 (并且不会理会指定默认填充值)
    //               2.如果等于之前的大小,则不变 (并且不会理会指定默认填充值)
    //               3.如果大于之前的大小:
    //                    1.第一次指定大小,按指定的填充值进行填充 
    //                    2.第二次指定大小:1.小于 或 等于 第一次指定的大小 ---> 填充值不会变 , 大小相对应进行变化
    //                                    2.大于第一次指定的大小 ---> 按指定的新的填充值进行填充
    Print_Vector(v1);
    //当重新指定的大小 大于 容量时 会自动进行扩容
    cout << "v1 的容量为: " << v1.capacity() << endl; // 30
    cout << "v1 的大小为: " << v1.size() << endl; // 17
}

int main()
{
    test01();
    return 0;
}