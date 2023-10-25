//vector的插入和删除
// 功能描述：

// 对vector容器进行插入、删除操作



// 函数原型：

    // push_back(ele);                                      //尾部插入元素ele
    // pop_back();                                          //删除最后一个元素
    // insert(const_iterator pos, ele);                     //迭代器指向位置pos插入元素ele
    // insert(const_iterator pos, int count,ele);           //迭代器指向位置pos插入count个元素ele
    // erase(const_iterator pos);                           //删除迭代器指向的元素
    // erase(const_iterator start, const_iterator end);     //删除迭代器从start到end之间的元素
    // clear();                                             //删除容器中所有元素

//总结:
    // 1.尾插 --- push_back
    // 2.尾删 --- pop_back
    // 3.插入 --- insert (位置迭代器)
    // 4.删除 --- erase (位置迭代器)
    // 5.清空 --- clear

#include<bits/stdc++.h>
using namespace std;

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
    vector<int> v1;
    //尾插
    // push_back(ele);                                      //尾部插入元素ele
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    //遍历
    Print_Vector(v1);

    //尾删
    // pop_back();                                          //删除最后一个元素
    v1.pop_back();
    Print_Vector(v1);

    //插入 第一个参数是迭代器

    // insert(const_iterator pos, ele);                     //迭代器指向位置pos插入元素ele
    v1.insert(v1.begin() , 0);
    Print_Vector(v1);

    // insert(const_iterator pos, int count,ele);           //迭代器指向位置pos插入count个元素ele
    v1.insert(v1.begin() , 2 , -1);
    Print_Vector(v1);


    //删除 第一个参数是迭代器
    // erase(const_iterator pos);                           //删除迭代器指向的元素
        //删除一个元素
    v1.erase(v1.begin());
    v1.erase(v1.end()-1);
    Print_Vector(v1);

        //删除元素范围
    //清空:
    //1.
    v1.clear();
    Print_Vector(v1);
    //2.
    v1.erase(v1.begin() , v1.end());    //从头到尾全部删除
    Print_Vector(v1);
}

int main()
{
    test01();
    return 0;
}