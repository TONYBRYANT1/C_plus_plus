#include "2.Point.h"

//设置x坐标
void Point::set_X(int x)//在Point作用域下的成员函数
{
    p_X=x;
}
//获取x坐标
int Point::get_X()//在Point作用域下的成员函数
{
    return p_X;
}
//设置y坐标
void Point::set_Y(int y)//在Point作用域下的成员函数
{
    p_Y=y;
}
//获取y坐标
int Point::get_Y()//在Point作用域下的成员函数
{
    return p_Y;
}