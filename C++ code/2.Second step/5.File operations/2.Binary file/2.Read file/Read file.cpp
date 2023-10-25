//二进制文件    读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型 : istream& read (char * buffer,int len);
//参数解释 ：字符指针buffer指向内存中一段储存空间,len是读写的字节数

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
    //1.包含头文件 : #include<fstream>
    //2.创建流对象 :
    ifstream ifs;
    //3.打开文件    判断文件是否打开成功
    ifs.open("D:\\computer learn\\C++\\C++ code\\2.Second step\\5.File operations\\test.text", ios::in | ios::binary);
    if( ifs.is_open() == 0 ) // or  if( !ifs.is_open() )
    {
        return ;
    }
    //4.读文件 :
    Person p;
    ifs.read((char *)&p,sizeof(Person));
    cout << "姓名 : " << p.P_Name << endl;
    cout << "年龄 : " << p.P_Age << endl;
    //5.关闭文件 : 
    ifs.close();
}

int main()
{
    test01();
    return 0;
}