//string子串
//功能描述:
    //从字符串中获取想要的子串

//函数原型:
    //string substr(int pos = 0 , int n = npos) const; // 返回由pos开始的n个字符组成的字符串

#include<bits/stdc++.h>
using namespace std;

//求子串
void test01()
{
    string str = "abcdef";
    string substr = str.substr(1,3);
    cout << "substr = " << substr << endl;
} 

//使用操作
void test02()
{
    //从邮件地址中 获取 用户信息
    string email = "zhangsan@sina.com";
    int pos = email.find("@");
    string subemail = email.substr(0,pos);//从 0 开始 截取 pos 个
    cout << "submail = " << subemail << endl;

} 

int main()
{
    //test01();
    test02();
    return 0;
}