#include<bits/stdc++.h>
//以下两种都是C语言头文件
#include<cstring>   //等效于下面那种写法
#include<string.h>
//C++ 的 string 头文件
#include<string>
using namespace std;
int main()
{
//1.string 的构造函数

    // //1. string();      				 //创建一个空的字符串 例如: string str;
    // string s1; //默认构造函数

    // //2.构造函数(常用)
    // string str1 = "str1";
    // cout << "str1 = " << str1 << endl;

    // //3.调用拷贝构造函数
    // string str2;
    // str2 = "str2";
    // cout << "str2 = " << str2 << endl;

    // //4.(常用)
    // string str3("str3");

    // //5. string(const char* s);	     //使用字符串s初始化
    // const char* str = "Hello World";
    // string s2(str);
    // cout << "s2 = " << s2 << endl;

    // //6. string(int n, char c);        //使用n个字符c初始化   
    // string s4(10 , 'a');
    // cout << "s4 = " << s4 << endl;
    
    // //7.
    // string str5("I Love you" , 1 , 4);     //用字符串从下标1开始的4位 用来初始化
    // cout << "str5 = " << str5 << endl;

    // //8. string(const string& str);    //使用一个string对象初始化另一个string对象
    // string s3(s2);
    // cout << "s3 = " << s3 << endl;

//2.C++ string 与 C 的 char* 的区别

    //1.C++ string 不含 '\0'
    // string str = "I Love You";
    // char array[] = {"I Love You"};
    // cout << "str 的实际占用大小：" << sizeof(str) << endl;
    // cout << "string 类型的占用大小" << sizeof(string) << endl;
    // cout << "array 的大小：" << sizeof(array) << endl;
    // cout << "str 存储了多少" << str.size() << endl;
    // cout << "str 的长度" << str.length() << endl;

    //2.string本身不是一个字符串(用printf()函数无法打印)
    // string str = "I LOVE YOU";
    // printf("%s" , str);
    // C++ string 为我们提供了一个访问字符串的接口：data() , c_str()
    // 因为string本身不是一个字符串 , 用字符串接口 , 可以获取string 的字符串
    // printf("%s\t%s\n" , str.data() , str.c_str());

//3.string 的赋值方式

    // //1.assign
    // string str1("I Miss You");
    // cout << str1 << endl;
    // string str2;
    // string str3;
    // //1.1
    // str2.assign(str1); // str2 = str1
    // cout << str1 << endl;
    // //1.2
    // str3.assign(str1 , 1 , 4); //从 str1 下标为 1 开始用 4 个字符进行赋值
    // cout << str3 << endl;
    // //1.3
    // string str4;
    // str4.assign(4 , 'K');
    // cout << str4 << endl;

//4.string 的比较方式
    
    // //比较 C++ string 和 C string 的比较方式是一样的
    // //"123" > "13" (从左到右 比较 ASCII码)
    // //1.string 的比较可以直接使用
    // string first = "123";
    // string second = "13";
    // cout << (first > second) << endl;
    // cout << (first != second) << endl;
    // cout << (first < second) << endl;

    // //2.string 的比较可以调用比较成员函数 compare
    // cout << first.compare(second) << endl; // strcmp
    // //first - second > 0    first > second    return 整数
    // //first - second < 0    first < second    return 0
    // //first - second == 0   first = second    return 负数

//5.string 连接操作

    // //1.直接+
    // string str1 = "I LOVE ";
    // cout << str1 << endl;
    // string str2 = "YOU"; 
    // str1 += str2;
    // cout << str2 << endl;
    // cout << str1 << endl;

    // //2.调用成员函数 append
    // string str3;
    // str3 = " SO MUCH ";
    // str1.append(str3);
    // cout << str1 << endl;
    // //append 选择性截取
    // string str4 = "hahahaha";
    // cout << str4 << endl;
    // str1.append(str4 , 0 , 4);
    // cout << str1 << endl;
    // //append 附加字符
    // str1.append(4 , '!');
    // cout << str1 << endl;
    // //append 便捷添加
    // str1.append("\nSINCERELY!!!!" , 0 , 13);
    // cout << str1 << endl;
    
//6.string 查找

    //1.find(从左往右找字符串或字符出现的位置)
    //若没找到 返回 npos(将 -1 符号化)
    // int ret = int(string::npos);
    // cout << ret << endl;
    
    // string str = "I LOVE YOU\nAND\nI MISS YOU";
    // if(str.find('\n') != string::npos)
    // {
    //     cout << str.find('\n') << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }
    // cout << str << endl;

    //2.rfind(从后往前找字符串或字符出现的位置)
    //返回的下标仍然是以最左边为0
    // string str = "I    you Love you LuoGu you";
    // if(str.rfind('o') != string::npos)
    // {
    //     cout << str.rfind('o') << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }

    //3.find_first_of(从左往右找第一个)
    //正向查找在原字符串中第一个与指定字符串（或字符）中的某个字符匹配的字符返回它的位置。
    //若查找失败，则返回npos。（npos定义为保证大于任何有效下标的值。）
    // string str = "I    you Love you LuoGu you";
    // if(str.find_first_of("you") != string::npos)
    // {
    //     cout << str.find_first_of("you") << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }

    //4.find_first_not_of(从左往右找第一个)
    // string str = "How Dare you are";
    // if(str.find_first_not_of('you') != string::npos)
    // {
    //     cout << str.find_first_not_of("you") << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }

    //5.find_last_of(从右往左找第一个)
    //逆向查找在原字符串中最后一个与指定字符串（或字符）中的某个字符匹配的字符，返回它的位置。
    //若查找失败，则返回npos。（npos定义为保证大于任何有效下标的值。）
    // string str = "How Dare you are";
    // if(str.find_last_of("you") != string::npos)
    // {
    //     cout << str.find_last_of("you") << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }

    //6.find_last_not_of(从右往左找第一个)
    // string str = "How Dare you are";
    // if(str.find_last_not_of("you") != string::npos)
    // {
    //     cout << str.find_last_not_of("you") << endl;
    // }
    // else
    // {
    //     cout << -1 << endl;
    // }
    
//7.替换 replace
    // string str("I Love You");
    // str.replace(2 , 4 , "Miss");
    // cout << str << endl;    
    // str = "I Love You";
    // str.replace(2 , 4 , "I Miss You" , 2 , 4);
    // cout << str << endl;
    // str = "I Love You";
    // str.replace(2 , 4 , 4 , 'o');
    // cout << str << endl;

//8.删除 erase
    // //1.
    // str = "I Love You";
    // str.erase(1 , 5);
    // cout << str << endl;
    // //2.
    // str = "I Love You";
    // str.erase(1); //删除下标为 1 以及 1 以后的字符
    // cout << str << endl;

//9.截取 substr()
    // string str = "I Love You";
    // int pos = str.find('e');
    // str = str.substr(pos+2);
    // cout << str << endl;

    // str = "I Love You";
    // str = str.substr(2 , 4);
    // cout << str << endl;

//10.插入 insert()
    string str = "I You";
    string str2("Love ");
    str = str.insert(2 , str2);
    cout << str << endl;
    str = "I You";
    str2 = "Love You";
    str = str.insert(2 , str2 , 0 , 5);
    cout << str << endl;
    return 0;
}
