//文本文件  读文件
    //读文件与写文件步骤相似,但是读取方式相对于写文件要更多

    //读文件的步骤如下:
        //1.包含头文件 : #include<fstream>
        //2.创建流对象 : ifstream ifs;
        //3.打开文件并判断文件是否打开成功
        //4.读数据 : 四种方式读取
        //5.关闭文件 : ifs.close();


#include<bits/stdc++.h>
using namespace std;

void test01()
{
    //1.包含头文件 : #include<fstream>
    //2.创建流对象 : ifstream ifs;
    ifstream ifs;
    //3.打开文件并判断文件是否打开成功 : ifs.open("文件路径",打开方式);
    ifs.open("D:\\computer learn\\C++\\C++ code\\2.Second step\\5.File operations\\test.text",ios::in);
    //ifs.is_open() 的值为bool类型
    if(ifs.is_open() == 0)
    {
        cout << "文件打开失败" << endl;
        return ;
    }
    //4.读数据 : 四种方式读取
        //第一种:创建字符数组,
        // char buf[1024] = {0};
        // while( ifs >> buf )//当文件读到最末尾时会返回0
        // {
        //     cout << buf << endl;
        // }
        //空格打印出现问题


        //第二种:getline
        // char buf[1024] = {0};
        // while( ifs.getline(buf,sizeof(buf)))
        // {
        //     cout << buf << endl;
        // }

        //第三种:string
        // string buf;
        // while(getline(ifs,buf))
        // {
        //     cout << buf << endl;
        // }

        //第四种:char c 逐个读(效率差不推荐)
        // char c;
        // while( (c = ifs.get()) != EOF )
        // {
        //     cout << c ;
        // }
    //5.关闭文件 : ifs.close();
    ifs.close();
}

int main()
{
    test01();
    return 0;
}