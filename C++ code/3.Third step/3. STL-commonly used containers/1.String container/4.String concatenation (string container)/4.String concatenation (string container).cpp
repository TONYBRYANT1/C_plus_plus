//string字符串拼接
//功能描述:
    //实现在字符串末尾拼接字符串

// **函数原型：**

// string& operator+=(const char* str);                    //重载+=操作符
// string& operator+=(const char c);                       //重载+=操作符
// string& operator+=(const string& str);                  //重载+=操作符
// string& append(const char *s); `                        //把字符串s连接到当前字符串结尾
// string& append(const char *s, int n);                   //把字符串s的前n个字符连接到当前字符串结尾
// string& append(const string &s);                        //同operator+=(const string& str)
// string& append(const string &s, int pos, int n);        //字符串s中从pos开始的n个字符连接到字符串结尾

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    // string& operator+=(const char* str);                //重载+=操作符
    string str1 = "我";
    str1 += "爱玩游戏";
    cout << "str1 = " << str1 << endl;

    // string& operator+=(const char c);                   //重载+=操作符
    str1 += ':';
    cout << "str1 = " << str1 << endl;

    // string& operator+=(const string& str);              //重载+=操作符
    string str2 = "LOL & DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    // string& append(const char *s);                      //把字符串s连接到当前字符串结尾
    string str3;
    str3 = 'I';
    str3.append(" LOVE");
    cout << "str3 = " << str3 << endl;

    // string& append(const char *s, int n);               //把字符串s的前n个字符连接到当前字符串结尾
    str3.append(" GAME  abcdef" , 6);
    cout << "str3 = " << str3 << endl;

    // string& append(const string &s);                        //同operator+=(const string& str)
    str3.append(str2);
    cout << "str3 = " << str3 << endl;

    // string& append(const string &s, int pos, int n);        //字符串s中从pos开始的n个字符连接到字符串结尾
    //最开始的 pos 为0
    string str4 ;
    str4 = " & CSgo & YuanShen";
    // str3.append(str4 , 0 , 7);//截取CSgo
    // cout << "str3 = " << str3 << endl;
    str3.append(str4 , 7 , 17);
    cout << "str3 = " << str3 << endl;





}

int main()
{
    test01();
    return 0;
}