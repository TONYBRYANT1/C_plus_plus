//string的查找和替换
//功能描述：

// 查找：查找指定字符串是否存在
// 替换：在指定的位置替换字符串


// 函数原型：
// int find(const string& str, int pos = 0) const;            //查找str第一次出现位置,从pos开始查找
// int find(const char* s, int pos = 0) const;                //查找s第一次出现位置,从pos开始查找
// int find(const char* s, int pos, int n) const;             //从pos位置查找s的前n个字符第一次位置
// int find(const char c, int pos = 0) const;                 //查找字符c第一次出现位置
// int rfind(const string& str, int pos = npos) const;        //查找str最后一次位置,从pos开始查找
// int rfind(const char* s, int pos = npos) const;            //查找s最后一次出现位置,从pos开始查找
// int rfind(const char* s, int pos, int n) const;            //从pos查找s的前n个字符最后一次位置
// int rfind(const char c, int pos = 0) const;                //查找字符c最后一次出现位置

// string& replace(int pos, int n, const string& str);        //替换从pos开始n个字符为字符串str
// string& replace(int pos, int n,const char* s);             //替换从pos开始的n个字符为字符串s

//总结:
//1.find查找是从左往右 , rfind从右往左
//2.find找到字符串后返回查找的第一个字符位置,找不到返回值-1
//3.replace在替换时,要指定从哪个位置起,要指定从哪个位置起,多少个字符,替换成什么样的字符串

#include<bits/stdc++.h>
using namespace std;

//1.查找
void test01()
{
    // int find(const char* s, int pos = 0) const;                //查找s第一次出现位置,从pos开始查找
    //从左往右 找到的第一个(按从左往右是第一个) 返回从左往右的位次(从0开始)
    string str1 = "abcdefgde";
    int pos = str1.find("de");// pos 从 0 开始 : 有 --- 返回对应的值    没有 --- 返回 -1
    if(pos == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串 , pos = " << pos << endl;
    }

    // int rfind(const char* s, int pos = npos) const;            //查找s最后一次出现位置,从pos开始查找
    //从右往左 找到的第一个(按从左往右是最后一个) 返回从左往右的位次(从0开始)
    pos = str1.rfind("de");
    if(pos == -1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串 , pos = " << pos << endl;
    }
}

//2.替换
void test02()
{
    string str1 = "abcdefg";
    str1.replace(1 , 3 , "1111");
    cout << "str1 = " << str1 << endl;

}

int main()
{
    //test01();
    test02();
    return 0;
}