#include<iostream>
#include<string> //C++风格的字符串
//常量
#define Day 7
using namespace std;
int main()
{


    // //变量
    // int a=0;
    // cout << "a = " << a << endl;
    // //打印
    // cout << "hello world" <<endl;
    // //常量
    // cout << "一周" << Day << "天"<<endl;
    // const int b=0;
    // //sizeof
    // cout << "int占" << sizeof(int) << "个字节" << endl;
    // //浮点型
    // float c=2.1189898f;//若不加f则默认为double
    // //double不用加f
    // double d=123.123123123;
    // cout << "c = " << c << endl;
    // //默认打印6为有效数字
    // cout << "float = " << sizeof(float) << endl;
    // cout << "double = " << sizeof(double) << endl;
    // float f1=3e2;
    // float f2=3e-2;
    // //科学计数法
    // cout << "f1 = " << f1 << endl;
    // cout << "f2 = " << f2 << endl;
    // //字符型
    // //计算机用ASCII码来存储
    // char ch1= 'a';// ''内只能创建一个字符
    // cout << ch1 << endl;
    // cout << "char = " << ch1 <<endl;
    // cout << "char的大小 = " << sizeof(char) <<endl;
    // //字符型变量对应的ASCII码值
    // cout << (int)ch1 << endl;//a的ASCII为97 A-65
    // //转义字符
    // //换行符 \n
    // cout << "haha\n";
    // //反斜杠 
    // cout << "\\" << endl;
    // //水平制表符 \t 作用:可以整齐的输出数据
    // cout << "a\tb" << endl;// \t占8个位置
    // cout << "aa\tbb" << endl;
    // cout << "aaa\tbb" << endl;
    // cout << "aaaa\tbb" << endl;
    // cout << "aaaaa\tbb" << endl;
    // cout << "aaaaaa\tbb" << endl;
    // cout << "aaaaaaa\tbb" << endl;
    // cout << "aaaaaaaa\tbb" << endl;
    // //字符串型
    // //1.C风格字符串
    // char str1[]="hello world";
    // cout << str1 << endl;
    // //2.C++风格字符串
    // //需要加头文件 #include<string>
    // string str2 ="hello world";
    // cout << str2 << endl;
    // //布尔数据类型Bool
    // //两个值:1.true --- 真(本质是1) 2.false --- 假(本质是0)
    // //bool类型占一个字节大小
    // cout << "sizeof(bool) = " << sizeof(bool) << endl; 
    // bool flag1 = true;
    // bool flag2 = false;
    // cout << flag1 << endl;
    // cout << flag2 << endl;





    //数据的输入cin
    //1.整形
    // int c=0;
    // cout << "请给c赋值" ;
    // cin >> c;
    // cout << "整形变量c的值为 = " << c <<endl; 

    //2.浮点型
    // float f1 = 3.14f;
    // cout << "给f1赋值 = " ;
    // cin >> f1;
    // cout << "浮点型变量f1 = " << f1 <<endl;

    //3.字符型
    // char str3 = 'a';
    // cout << "请给str3赋值" ;
    // cin >> str3;
    // cout << "str3 = " << str3 << endl;

    //4.字符串型
    // string str4 = "hello world";
    // cout << "请给str4赋值" << endl;
    // cin >> str4;
    // cout << "str4 = " << str4 << endl;

    //5.布尔类型
    //bool类型cin:  1.数字(非0则为真 ，0则为假) 2.cin (true)时候相当于输入字符串，默认为0
    // bool flag3 =true; 
    // cout << "flag3 = " << flag3 <<endl;
    // cout << "请给flag3赋值 " ;
    // cin >> flag3;
    // cout << "flag3 = " << flag3 <<endl;




    //运算符
    //1.加减乘除
    // int d = 40;
    // int e = 20;
    // double f = 0.5;
    // double g = 0.25;
    // double h = 0.22;
    // cout << d+e << endl;
    // cout << d-e << endl;
    // cout << d*e << endl;
      //两整数相除
    //cout << d/e << endl;//两个整数相除的结果依然是整数，将小数部分去除，只剩余整数部分
      //两小数相除
   // cout << f/g << endl;//整除结果为整数
   // cout << f/h << endl;//结果可以有小数
      //整数除以小数
    //cout << d/f << endl;
   // cout << d/h << endl;
      //小数除以整数
   // cout << f/e << endl; 
   // cout << f/h << endl;

    //2.取模运算---本质求余数
    //两个小数不可以做取模运算
    //cout << d%e << endl;
    //3.前后置++/--
    //4.加等/乘等...
    //5.==/!=/>/</>=/<=
    //6.!/&&/||





    



    































































    //system("pause");
    return 0;
}