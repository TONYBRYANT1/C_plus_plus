// string插入和删除

// 功能描述：

// 对string字符串进行插入和删除字符操作

// 函数原型：

// string& insert(int pos, const char* s);                  //插入字符串
// string& insert(int pos, const string& str);              //插入字符串
// string& insert(int pos, int n, char c);                  //在指定位置插入n个字符c
// string& erase(int pos, int n = npos);                    //删除从Pos开始的n个字符 

//总结:插入和删除的起始下标都是从0开始的

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    string str = "hello";

    //插入
    // string& insert(int pos, const char* s);                  //插入字符串
    str.insert(1 , "111");
    cout << "str = " << str << endl;

    //删除
    // string& erase(int pos, int n = npos);                    //删除从Pos开始的n个字符 
    str.erase(1 , 3);    
    cout << "str = " << str << endl;

}

int main()
{
    test01();
    return 0;
}

