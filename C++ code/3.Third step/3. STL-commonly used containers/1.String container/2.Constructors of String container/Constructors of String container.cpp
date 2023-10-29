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
    //1. string();      				 //创建一个空的字符串 例如: string str;
    string s1; //默认构造函数

    //2.构造函数(常用)
    string str1 = "str1";
    cout << "str1 = " << str1 << endl;

    //3.调用拷贝构造函数
    string str2;
    str2 = "str2";
    cout << "str2 = " << str2 << endl;

    //4.(常用)
    string str3("str3");

    //5. string(const char* s);	     //使用字符串s初始化
    const char* str = "Hello World";
    string s2(str);
    cout << "s2 = " << s2 << endl;

    //6. string(int n, char c);        //使用n个字符c初始化   
    string s4(10 , 'a');
    cout << "s4 = " << s4 << endl;
    
    //7.
    string str5("I Love you" , 1 , 4);     //用字符串从下标1开始的4位 用来初始化
    cout << "str5 = " << str5 << endl;

    //8. string(const string& str);    //使用一个string对象初始化另一个string对象
    string s3(s2);
    cout << "s3 = " << s3 << endl;

    
}

int main()
{
    test01();
    return 0;
}
