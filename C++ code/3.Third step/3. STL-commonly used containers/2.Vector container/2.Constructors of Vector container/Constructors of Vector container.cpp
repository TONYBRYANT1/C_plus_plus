//vector构造函数
// 功能描述：
    // 创建vector容器

// 函数原型：
    // vector<T> v;                		    //采用模板实现类实现，默认构造函数
    // vector(v.begin(), v.end());          //将v[begin(), end())   左闭右开    区间中的元素拷贝给本身。
    // vector(n, elem);                     //构造函数将n个elem拷贝给本身。
    // vector(const vector &vec);           //拷贝构造函数。

//总结:vector的多种构造方式没有可比性,灵活使用即可

#include<bits/stdc++.h>
using namespace std;

void Print_Vector(vector<int>& v)
{   
    for(vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " " ;
    }
    cout << endl;
}


void test01()
{
    // vector<T> v;                		    //采用模板实现类实现，默认构造函数
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    Print_Vector(v1);

    // vector(v.begin(), v.end());          //将v[begin(), end())   左闭右开    区间中的元素拷贝给本身。
    vector<int> v2(v1.begin() , v1.end());
    Print_Vector(v2);

    // vector(n, elem);                     //构造函数将n个elem拷贝给本身。
    vector<int> v3(10 , 100);   //10 个 100
    Print_Vector(v3);

    // vector(const vector &vec);           //拷贝构造函数。
    vector<int> v4(v1);
    Print_Vector(v4);

}



int main()
{
    test01();
    return 0;
}