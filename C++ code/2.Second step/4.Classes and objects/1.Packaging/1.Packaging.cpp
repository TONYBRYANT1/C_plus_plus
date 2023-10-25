#include<bits/stdc++.h>
//#include"2.Circle.h"
#include"3.Circle.cpp"
//#include"2.Point.h"
#include"3.Point.cpp"
using namespace std;

    //类和对象:C++认为万事万物都皆为对象,对象上有其属性和行为 


//1.封装:

    // //1.将属性和行为作为一个整体,表现生活中的实物
    //     //1.设计一个圆类,求圆的周长:2*PI*r
    // const double PI = 3.14;
    // class Circle//类 类的名字
    // {
    //     //访问权限:
    //         //公众权限:
    // public:
    //
    // //专业术语:
    // //类中的属性和行为 我们统一成为 成员
    // //属性      成员属性    成员变量
    // //行为      成员函数    成员方法
    //
    //     //属性:
    //         //半径:
    //     int c_r; 
    //     //行为:
    //         //获取圆的周长:
    //     double calculateZC()
    //     {
    //         return 2*PI*c_r;
    //     }
    // };
    // class Student
    // {
    // public:
    //     string s_name;
    //     string s_id;
    //     void Print_student_information()
    //     {
    //         cout << "学生姓名:" << s_name << endl;
    //         cout << "学生学号:" << s_id << endl;
    //     }
    //     void setName(string name)
    //     {
    //         s_name=name;
    //     }
    //     void setId(string id)
    //     {
    //         s_id=id;
    //     }
    // };



    // //2.将属性和行为加以权限控制
    //     //访问权限:
    //     //1.public      公共权限        成员类内可以访问    成员类外可以访问
    //     //2.protected   保护权限        成员类内可以访问    成员类外不可以访问          儿子可以访问父亲的保护内容                                       
    //     //3.private     私有权限        成员类内可以访问    成员类外不可以访问          儿子不可以访问父亲的私有内容
    // class Person
    // {
    // //公共权限:
    // public:
    //     string p_Name;
    //
    // //保护权限:
    // protected:
    //     string p_Car;
    //
    // //私有权限:
    // private:
    //     string p_Password;
    //
    // public:
    //     void func()
    //     {
    //         p_Name = "张三";
    //         p_Car = "拖拉机";
    //         p_Password = "123456";
    //     }
    // };



    // //3.struct和class的区别
    // //区别:默认的访问权限不同
    // //strcut    默认权限为公共
    // //class     默认权限为私有
    // class C1
    // {
    //     int m_A; //默认权限是   私有
    // };
    // struct C2
    // {
    //     int m_A; //默认权限是   公共
    // };



    // //4.将成员属性设置为私有
    //     //优点1:将所有的成员属性设置为私有,可以自己控制读写权限
    //     //优点2:对于写权限,我们可以检测数据的有效性
    // class Person 
    // {
    // public:
    //     //设置(写)姓名
    //     void setName(string name)
    //     {
    //         p_Name = name;
    //     }  
    //     //获取(读)姓名
    //     string getName()
    //     {
    //         return p_Name;
    //     }
    //     void setAge(int age)
    //     {
    //         if(age<0 || age>150)//监测数据的有效性
    //         {
    //             p_Age = 0;
    //             cout << "你这个老妖精!" << endl;
    //             return;
    //         }
    //         p_Age = age;
    //     }
    //     //获取(读)年龄
    //     int getAge()
    //     {
    //         return p_Age;
    //     }
    //     //设置(写)情人
    //     void setLover(string Lover)
    //     {
    //         p_Lover=Lover;
    //     }
    //
    // private:
    //     //姓名:(可读可写)              
    //     string p_Name;
    //     //年龄:(可读可写)
    //     int p_Age;
    //     //情人:(可写)
    //     string p_Lover;
    // };



    // //5.案例:设计立方体类
//         //要求:
//         //1.设计立方体(Cube)
//         //2.求出立方体的面积和体积
//         //3.分别用全局函数和成员函数判断两个立方体是否相等
//         //做法:
//         //1.创建立方体类
//         //2.设计属性
//         //3.设计行为 获取立方体面积和体积
//         //4.分别利用全局函数和成员函数 判断两个立方体是否相等
//     class Cube
//     {
//     public:
//         //设置长
//         void setL(int l)
//         {
//             c_L=l;
//         }
//         //获取长
//         int getL()
//         {
//             return c_L;
//         }
//         //设置宽
//         void setW(int w)
//         {
//             c_W=w;
//         }
//         //获取宽
//         int getW()
//         {
//             return c_W;
//         }
//         //设置高
//         void setH(int h)
//         {
//             c_H=h;
//         }
//         //获取高
//         int getH()
//         {
//             return c_H;
//         }
//         //获取立方体面积
//         int calculateS()
//         {
//             return 2*(c_L*c_H+c_L*c_W+c_H*c_W);
//         }
//         //获取立方体体积
//         int calculateV()
//         {
//             return c_L*c_W*c_H;
//         }
//         //利用成员函数判断两个立方体是否相等
//         bool isCongruentByClass(Cube &c)
//         {
//             if(c_L==c.getL() && c_W==c.getW() && c_H==c.getH())
//             {
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     private:
//         int c_L;//长
//         int c_W;//宽
//         int c_H;//高
//     };
// //利用全局函数判断两个立方体是否想等
// //congruent(全等)
// bool isCongruent(Cube &c1,Cube &c2)
// {
//     if(c1.getL()==c2.getL() && c1.getW()==c2.getW() && c1.getH()==c2.getH())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }



    //6.案例:点个圆的关系
        //要求:
        //设计一个圆形类(Circle),和一个点类(Point),计算点和圆的关系
        //1.在类中可以让另一个类 作为本类中的成员
        //2.如何把一个类拆分到不同的文件中
    class Point
    {
    public:
        //设置x坐标
        void set_X(int x)
        {
            p_X=x;
        }
        //获取x坐标
        int get_X()
        {
            return p_X;
        }
        //设置y坐标
        void set_Y(int y)
        {
            p_Y=y;
        }
        //获取y坐标
        int get_Y()
        {
            return p_Y;
        }
    private:
        int p_X=0;
        int p_Y=0;
    };
    
    class Circle
    {
    public:
        //设置半径
        void set_R(int R)
        {
            c_R=R;
        }
        //获取半径
        int get_R()
        {
            return c_R;
        }
        //设置圆心
        void set_Center(Point center)
        {
            c_Center=center;
        }
        //获取圆心
        Point get_Center()
        {
            return c_Center;
        }
    private:
        int c_R;//半径
        //1.在类中可以让另一个类 作为本类中的成员
        Point c_Center;//圆心
    };

void IsInCircle(Circle &c , Point &p)
{
    //1.计算两点之间距离的平方
    int distance = 
    (c.get_Center().get_X() - p.get_X())*(c.get_Center().get_X() - p.get_X())+
    (c.get_Center().get_Y() - p.get_Y())*(c.get_Center().get_Y() - p.get_Y());
 
    //2.计算半径的平方
    int rDistance = c.get_R()*c.get_R();

    //3.判断关系
    if(distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if(distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else//(distance < rDistance)
    {
        cout << "点在圆内" << endl;
    }
}


    //2.如何把一个类拆分到不同的文件中
        //  .h文件主要写申明(函数申明)(变量申明)
        //.cpp文件主要写函数实现(但是要在函数名前加上)
        //主函数主要包含.cpp , .cpp--->.h
int main()
{
    // //1.将属性和行为作为一个整体,表现生活中的实物
    // //实例化:通过类来创建一个对象的过程
    // //圆的实例化:
    // Circle c1;
    // c1.c_r = 10;
    // cout << "圆的周长为:" << c1.calculateZC() << endl;
    // //学生的实例化:
    // Student s1;
    // s1.s_name = "乐黎健";
    // s1.setName("TonyBryant");
    // s1.s_id = "2207011108";
    // s1.setId("0824");
    // s1.Print_student_information();



    // //2.将属性和行为加以权限控制
    // Person p1;
    // p1.p_Name = "李四";
    // //p1.m_Car = "奔驰";//保护权限内容,在类外访问不到
    // //p1.m_Password = "123456";//私有权限内容,在类外访问不到



    // //3.struct和class的区别
    // C1 c1;
    // //c1.m_A=1;//'int C1::m_A' is private within this context
    // C2 c2;
    // //c2.m_A=1;//正常运行



    // //4.将成员属性设置为私有
    //     //优点1:将所有的成员属性设置为私有,可以自己控制读写权限
    //     //优点2:对于写权限,我们可以检测数据的有效性
    // Person p1;
    //
    // p1.setName("张三");
    // cout << "姓名为:" << p1.getName() << endl;
    //
    // p1.setAge(15);
    // //p1.p_Age = 18;//'int Person::p_Age' is private within this context
    // cout << "年龄为:" << p1.getAge() << endl;
    //
    // p1.setLover("KOBE");



    // //5.案例:设计立方体类
    // //要求:
    // //1.设计立方体(Cube)
    // //2.求出立方体的面积和体积
    // //3.分别用全局函数和成员函数判断两个立方体是否相等
    // //做法:
    // //1.创建立方体类
    // //2.设计属性
    // //3.设计行为 获取立方体面积和体积
    // //4.分别利用全局函数和成员函数 判断两个立方体是否相等
    // Cube c1;
    // c1.setL(10);
    // c1.setW(10);
    // c1.setH(10);
    // cout << "立方体的面积为:" << c1.calculateS() << endl;
    // cout << "立方体的体积为:" << c1.calculateV() << endl;
    //
    // Cube c2;
    // c2.setL(10);
    // c2.setW(10);
    // c2.setH(10);
    // cout << "立方体的面积为:" << c1.calculateS() << endl;
    // cout << "立方体的体积为:" << c1.calculateV() << endl;
    //
    // //利用全局函数判断两个立方体是否想等
    // bool ret1 = isCongruent(c1,c2);
    // if(ret1)
    // {
    //     cout << "c1和c2是相等的" << endl;
    // }
    // else
    // {
    //     cout << "c1和c2不是相等的" << endl;
    // }
    // //利用成员函数判断两个立方体是否相等
    // bool ret2 = c1.isCongruentByClass(c2);//已知的(c1)与未知的(c2)比较
    // if(ret2)
    // {
    //     cout << "c1和c2是相等的" << endl;
    // }
    // else
    // {
    //     cout << "c1和c2不是相等的" << endl;
    // }



    // //6.案例:点个圆的关系
    //     //要求:
    //     //设计一个圆形类(Circle),和一个点类(Point),计算点和圆的关系
    //
    // //创建圆
    // Circle c;
    // c.set_R(10);
    // Point center;
    // center.set_X(10);
    // center.set_Y(0);
    // c.set_Center(center);
    // //创建点
    // Point p1,p2,p3;
    // p1.set_X(10);
    // p1.set_Y(9);
    // p2.set_X(10);
    // p2.set_Y(10);
    // p3.set_X(10);
    // p3.set_Y(11);
    // //判断关系
    // IsInCircle(c,p1);
    // IsInCircle(c,p2);
    // IsInCircle(c,p3);



    //system("pause" );
    //return 0;
}