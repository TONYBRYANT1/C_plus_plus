// swap(交换的容器 要求 同类型)

// 功能描述：
//     互换两个容器的元素(交换 size 和 capacity)

// 函数原型：
//     swap(container c1, container c2); 

  // 互换两个容器的元素

  // c1容器1

  // c2容器2

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int> v1;
    vector<int> v2;
    
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }

    for(int j=17;j>=0;j--)
    {
        v2.push_back(j);
    }

    //原
    //v1:
    cout << "v1:" << endl;
    for_each(v1.begin() , v1.end() , MyPrint);
    cout << endl;
    cout << "v1 的大小为:" << v1.size() << endl;
    cout << "v1 的容量为:" << v1.capacity() << endl;


    //v2:
    cout << "v2:" << endl;
    for_each(v2.begin() , v2.end() , MyPrint);
    cout << endl;
    cout << "v2 的大小为:" << v2.size() << endl;
    cout << "v2 的容量为:" << v2.capacity() << endl;
    

    //swap
    swap(v1 , v2);

    //终
    //v1:
    cout << "v1:" << endl;
    for_each(v1.begin() , v1.end() , MyPrint);
    cout << endl;
    cout << "v1 的大小为:" << v1.size() << endl;
    cout << "v1 的容量为:" << v1.capacity() << endl;

    //v2:
    cout << "v2:" << endl;
    for_each(v2.begin() , v2.end() , MyPrint);
    cout << endl;
    cout << "v2 的大小为:" << v2.size() << endl;
    cout << "v2 的容量为:" << v2.capacity() << endl;

}
int main()
{
    test01();
    return 0;
}