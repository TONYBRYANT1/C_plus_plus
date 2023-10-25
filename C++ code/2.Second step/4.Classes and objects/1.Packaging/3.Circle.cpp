#include "2.Circle.h"

//设置半径
void Circle::set_R(int R)//在Circle作用域下的成员函数
{
    c_R=R;
}
//获取半径
int Circle::get_R()//在Circle作用域下的成员函数
{
    return c_R;
}
//设置圆心
void Circle::set_Center(Point center)//在Circle作用域下的成员函数
{
    c_Center=center;
}
//获取圆心
Point Circle::get_Center()//在Circle作用域下的成员函数
{
    return c_Center;
}
