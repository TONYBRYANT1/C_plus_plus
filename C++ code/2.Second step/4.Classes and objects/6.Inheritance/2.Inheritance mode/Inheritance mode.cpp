//继承方式:
//1.公共继承
    //父:public-->子:public  父:protected-->子:protected  父:private-->子:不可访问
//2.保护继承
    //父:public-->子:protected  父:protected-->子:protected  父:private-->子:不可访问
//3.私有继承
    //父:public-->子:private  父:protected-->子:private  父:private-->子:不可访问

#include<bits/stdc++.h>
using namespace std;

// //父:
// class Father1
// {
// public:
//     int B_a;
// protected:
//     int B_b;
// private:
//     int B_c;
// };



// //儿:
// //1.公共继承
// class Son1 : public Father1   //父:public-->子:public  父:protected-->子:protected  父:private-->子:不可访问
// {
// public:
//     void func()
//     {
//         B_a = 10;//public
//         B_b = 10;//protected
//         //B_c = 10;//不可访问
//     }
// };
//
// void test01()
// {
//     Son1 s1;
//     s1.B_a = 10;//public
//     //s1.B_b = 10;//protected
//     //s1.B_c = 10;//不可访问
// }
//
// //2.保护继承
// class Son2 : protected Father1   //父:public-->子:protected  父:protected-->子:protected  父:private-->子:不可访问
// {
// public:
//     void func()
//     {
//         B_a = 10;//protected
//         B_b = 10;//protected
//         //B_c = 10;//不可访问
//     }
// };
//
// void test02()
// {
//     Son2 s2;
//     //s2.B_a = 10;//protected
//     //s2.B_b = 10;//protected
//     //s2.B_c = 10;//不可访问
// }
//
// //3.私有继承
// class Son3 : private Father1   //父:public-->子:private  父:protected-->子:private  父:private-->子:不可访问
// {
// public:
//     void func()
//     {
//         B_a = 10;//private
//         B_b = 10;//private
//         //B_c = 10;//不可访问
//     }
// };
//
// void test03()
// {
//     Son3 s3;
//     //s3.B_a = 10;//private
//     //s3.B_b = 10;//private
//     //s3.B_c = 10;//不可访问
// }



// //孙:
// class GrandSon3 : public Son3   //子:private-->孙:不可访问  子:不可访问-->孙:不可访问 
// {
// public:
//     void func()
//     {
//         //B_a = 10;//不可访问
//         //B_b = 10;//不可访问
//         //B_c = 10;//不可访问
//     }
// };

int main()
{
    return 0;
}