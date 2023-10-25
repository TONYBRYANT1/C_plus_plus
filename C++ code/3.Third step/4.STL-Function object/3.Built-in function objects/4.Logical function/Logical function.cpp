// 逻辑仿函数

// 功能描述：
    // - 实现逻辑运算

// 函数原型：
    // template<class T> bool logical_and<T>              //逻辑与
    // template<class T> bool logical_or<T>               //逻辑或
    // template<class T> bool logical_not<T>              //逻辑非

#include<bits/stdc++.h>
using namespace std;

void Print_Vector_Bool(const vector<bool>& v)
{
    for(vector<bool>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}


//内建的函数对象-----逻辑仿函数
//逻辑非 logical_not

void test01()
{
    vector<bool> v1;
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(true);

    //原来
    cout << "v1 初始:" << endl;
    Print_Vector_Bool(v1);

    //利用逻辑非 将容器 v 搬运到 v2 中 , 并执行取反操作
    vector<bool> v2;
    v2.resize(v1.size());
    transform(v1.begin() , v1.end() , v2.begin() , logical_not<bool>());

    //遍历 v2
    cout << "v2 初始:" << endl;
    Print_Vector_Bool(v2);

}
int main()
{
    test01();
    return 0;
}

