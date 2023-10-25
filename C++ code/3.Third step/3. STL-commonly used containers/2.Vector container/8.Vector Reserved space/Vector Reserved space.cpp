//vector预留空间

//功能描述:
    //减少vector在动态扩展容量时的扩展次数

//函数原型:
    //reserve(int len);     //容器预留 len 个元素长度 , 预留位置不初始化 , 元素不可访问

//总结:如果数据量较大 , 可以一开始就利用 reserve 来预留空间 以减少存储数据时 容器内存的扩展次数

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    //1.
    vector<int> v1;

    int num = 0; //统计开辟次数
    int * p = NULL;
    
    for(int i=0;i<100000;i++)
    {
        v1.push_back(i);
        if(p != &v1[0])
        { 
            p = &v1[0];
            num++;
        }

    }
    cout << "num = " << num << endl;//进行了 18 次的内存扩展,才将 100000 个数据完全存放(每一次内存扩展都可能  要换地址)
    
    p = NULL;
    num = 0;

    //2.
    vector<int> v2;
    //利用 .reserve() 预留空间(我们已经知道要向 v2 存入 100000 个数据 , 所以提前预留空间 使数据存放时 容器不用多次扩展 )
    v2.reserve(100000);

    for(int i=0;i<100000;i++)
    {
        v2.push_back(i);
        if(p != &v2[0])
        { 
            p = &v2[0];
            num++;
        }

    }
    cout << "num = " << num << endl;//预留了内存之后 只进行了一次内存扩展 就存放了 100000 个数据

    
}

int main()
{
    test01();
    return 0;
}
