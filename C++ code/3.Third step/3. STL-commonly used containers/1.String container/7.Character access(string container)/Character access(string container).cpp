//string字符存取
//string中单个字符存取方式有两种:
    // char& operator[](int n);      //通过[]方式取字符
    // char& at(int n);              //通过at方法获取字符

//总结:string字符串中单个字符存取有两种方式:1.[] 2. .at()

#include<bits/stdc++.h>
using namespace std;

void test01()
{
    string str1 = "hello";
    cout << "str1 = " << str1 << endl;
    
    //字符获取:
    //1.通过[]访问单个字符
    for(int i=0;i<str1.size();i++)
    {
        cout << str1[i] << " ";
    }
    cout << endl;

    //2.通过at方式访问单个字符
    for(int i=0;i<str1.size();i++)
    {
        cout << str1.at(i) << " ";
    }
    cout << endl;

    //修改单个字符
    //1.[]
    str1[0] = 'x';
    cout << "str1 = " << str1 << endl;

    //2.at
    str1.at(1) = 'v';
    cout << "str1 = " << str1 << endl;
}


int main()
{
    test01();
    return 0; 
}