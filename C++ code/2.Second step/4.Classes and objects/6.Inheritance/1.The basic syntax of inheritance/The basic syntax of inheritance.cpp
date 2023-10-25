//继承的基本语法(syntax)
//继承的好处:减少重复的代码
//语法:class  子类  :  继承方式  父类
//子类  也称为  派生类
//父类  也称为  基类 
//
//派生类(子类)中的成员,包含两大部分:
//1.从基类继承过来的(共性)  2.自己添加的成员(个性)      
#include<bits/stdc++.h>

using namespace std;

////普通实现页面
// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页、公开课、登录、注册...(共用头部)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//     }
//     void left()
//     {
//         cout << "Java、Python、C++...(公共分类列表)" << endl;
//     }
//     void content()
//     {
//         cout << "Java学科视频" << endl;
//     }
// };
//
// class Python
// {
// public:
//     void header()
//         {
//             cout << "首页、公开课、登录、注册...(共用头部)" << endl;
//         }
//         void footer()
//         {
//             cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//         }
//         void left()
//         {
//             cout << "Java、Python、C++...(公共分类列表)" << endl;
//         }
//         void content()
//         {
//             cout << "Python学科视频" << endl;
//         }
// };
//
// class CPP
// {
// public:
//     void header()
//         {
//             cout << "首页、公开课、登录、注册...(共用头部)" << endl;
//         }
//         void footer()
//         {
//             cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//         }
//         void left()
//         {
//             cout << "Java、Python、C++...(公共分类列表)" << endl;
//         }
//         void content()
//         {
//             cout << "CPP学科视频" << endl;
//         }
// };
//
// void test01()
// {
//     cout << "Java下载视频页面如下:" << endl;
//     Java ja;
//     ja.header();
//     ja.footer();
//     ja.left();
//     ja.content();
//
//     cout << "---------------------------------------------" << endl;
//
//     cout << "Python下载视频页面如下:" << endl;
//     Python py;
//     py.header();
//     py.footer();
//     py.left();
//     py.content();
//
//     cout << "---------------------------------------------" << endl;
//
//     cout << "CPP下载视频页面如下:" << endl;
//     CPP cpp;
//     cpp.header();
//     cpp.footer();
//     cpp.left();
//     cpp.content();
//
//     cout << "---------------------------------------------" << endl;
// }


// //继承实现页面
// //1.公共页面
// class BasePage
// {
// public:
//     void header()
//     {
//         cout << "首页、公开课、登录、注册...(共用头部)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//     }
//     void left()
//     {
//         cout << "Java、Python、C++...(公共分类列表)" << endl;
//     }
// };
//
// //2.Java页面
// class Java:public BasePage
// {
// public:
//     void content()
//     {
//         cout << "Java的学科视频" << endl;
//     }
// };
//
// //3.Python页面
// class Python:public BasePage
// {
// public:
//     void content()
//     {
//         cout << "Python的学科视频" << endl;
//     }
// };
//
// //4.CPP页面
// class CPP:public BasePage
// {
// public:
//     void content()
//     {
//         cout << "CPP的学科视频" << endl;
//     }
// };
//
// void test01()
// {
//     cout << "Java下载视频页面如下:" << endl;
//     Java ja;
//     ja.header();
//     ja.footer();
//     ja.left();
//     ja.content();
//
//     cout << "---------------------------------------------" << endl;
//
//     cout << "Python下载视频页面如下:" << endl;
//     Python py;
//     py.header();
//     py.footer();
//     py.left();
//     py.content();
//
//     cout << "---------------------------------------------" << endl;
//
//     cout << "CPP下载视频页面如下:" << endl;
//     CPP cpp;
//     cpp.header();
//     cpp.footer();
//     cpp.left();
//     cpp.content();
//
//     cout << "---------------------------------------------" << endl;
// }

int main()
{
    test01();
    return 0;
}