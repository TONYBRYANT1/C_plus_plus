//文本文件
    //1.写文件:
    // 写文件步骤如下:
        // 1.包含头文件 : #include <fstream>
        // 2.创建流对象 : ofstream ofs;
        // 3.打开文件 : ofs.open("文件路径",打开方式);
        // 4.写数据 : ofs << "写入的数据";
        // 5.关闭文件: ofs.close();

    //2.文件打开方式：
        //  打开方式      解释                       
        //  ios::in      为读文件而打开文件           
        //  ios::out     为写文件而打开文件           
        //  ios::ate     初始位置：文件尾             
        //  ios::app     追加方式写文件             
        //  ios::trunc   如果文件存在先删除，再创建 
        //  ios::binary  二进制方式                 
        //  注意：文件打开方式可以配合使用，利用|操作符
        //  例如：用二进制方式写文件 ios::binary  |  ios:: out

#include<bits/stdc++.h>
#include<fstream>
using namespace std;

//文本文件 写文件
void test01()
{
    // 1.包含头文件 : #include <fstream>

    // 2.创建流对象 : ofstream ofs;
    ofstream ofs;
    // 3.打开文件 : ofs.open("文件路径",打开方式);
    ofs.open("D:\\computer learn\\C++\\C++ code\\2.Second step\\5.File operations\\test.text",ios::out);
    // 4.写数据 : ofs << "写入的数据";
    ofs << "姓名 : 李四" << endl;
    ofs << "性别 : 男" << endl;
    ofs << "年龄 : 18" << endl;
    // 5.关闭文件: ofs.close();
    ofs.close();
}


int main()
{
    test01();
    return 0;
}