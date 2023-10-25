//String构造函数

// 构造函数原型：
// string();      				 //创建一个空的字符串 例如: string str;
// string(const char* s);	     //使用字符串s初始化
// string(const string& str);    //使用一个string对象初始化另一个string对象
// string(int n, char c);        //使用n个字符c初始化 

#include<bits/stdc++.h>
#include<string>
using namespace std;

void test01()
{
    // string();      				 //创建一个空的字符串 例如: string str;
    string s1; //默认构造函数

    // string(const char* s);	     //使用字符串s初始化
    const char* str = "Hello World";
    string s2(str);
    cout << "s2 = " << s2 << endl;

    // string(const string& str);    //使用一个string对象初始化另一个string对象
    string s3(s2);
    cout << "s3 = " << s3 << endl;

    // string(int n, char c);        //使用n个字符c初始化   
    string s4(10 , 'a');
    cout << "s4 = " << s4 << endl;
}

int main()
{
    test01();
    return 0;
}
