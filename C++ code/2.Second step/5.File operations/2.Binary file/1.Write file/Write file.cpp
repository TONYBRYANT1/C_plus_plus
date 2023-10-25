//二进制文件
//以二进制的方式对文件进行读写操作
//打开方式要指定为 ios::binary

//二进制文件    写文件
//以二进制方式写文件主要利用流对象调用成员函数write
//函数原型 : ostream& write(const char * buffer,int len);
//参数解释 : 字符指针buffer指向内存中一段储存空间,len是读写的字节数

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    char P_Name[64];//姓名(用string可能会出问题)
    int P_Age;//年龄
};

void test01()
{
    Person p = {"张三" , 18};
    //1.包含头文件 : #include<fstream>
    //2.创建流对象 :
    ofstream ofs;
    //3.打开文件 :
    ofs.open("D:\\computer learn\\C++\\C++ code\\2.Second step\\5.File operations\\test.text",ios::out | ios::binary);
    //将2.3.两步和成一步:
    //ofstream ofs("D:\\computer learn\\C++\\C++ code\\2.Second step\\5.File operations\\test.text",ios::out | ios::binary);

    //4.写文件 :
    ofs.write((const char *)&p , sizeof(Person));
    //函数原型 : ostream& write(const char * buffer,int len);
    //因为&p的类型为Person * , 函数参数需要的类型是 const char * , 所以需要强转

    //5.关闭文件 :
    ofs.close();
}

int main()
{
    test01();
    return 0;
}   