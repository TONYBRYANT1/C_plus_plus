//vector互换容器

//功能描述:
    //实现两个容器内元素进行互换

//函数原型:
    //swap(vec);        //将vec与本身的元素互换

#include<bits/stdc++.h>
using namespace std;

//vector容器互换

//1.基本使用
void Print_Vector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//总结:swap可以使两个容器互换 , 可以达到实用的收缩内存的效果

//基础
void test01()
{
    cout << "交换前" << endl;
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    Print_Vector(v1);

    vector<int> v2;
    for(int i=9;i>=0;i--)
    {
        v2.push_back(i);
    }
    Print_Vector(v2);

    cout << "交换后" << endl;

    v1.swap(v2);//容器内存储内容数量可以不一样
    Print_Vector(v1);
    Print_Vector(v2);
}

//用途:巧用swap收缩内存
void test02()
{
    vector<int> v;
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);
    }
    cout << "v的容量为: " << v.capacity() << endl;//131072
    cout << "v的大小为: " << v.size() << endl;//100000

    v.resize(3);//重新指定大小
    cout << "v的容量为: " << v.capacity() << endl;//131072
    cout << "v的大小为: " << v.size() << endl;//3

    //巧用swap收缩内存
    vector<int> (v).swap(v);
    cout << "v的容量为: " << v.capacity() << endl;//3
    cout << "v的大小为: " << v.size() << endl;//3
//理解:原容器的 size:100000 capacity:131072 (因为 size 很大 , 所以容器给的容量很大)
//    但是 resize 之后仅仅用了 3 个空间,导致容量浪费
//    vector<int> (v) --- 相当于拷贝构造 创建了一个匿名容器( 按照v的 size 创造 容量(3) 和 大小(3) )
//    vector<int> (v).swap(v) --- 相当于让 匿名对象 和 v 互换了所指的内容
//    当 vector<int> (v).swap(v) 执行完成之后 编译器看到了匿名的容器 就会将这个匿名容器立即释放干净
}

int main()
{
    test01();
    test02();
    return 0;
}