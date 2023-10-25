#pragma once 
#include<bits/stdc++.h>
#include"2.Point.h"
using namespace std;

class Circle
{
public:
    //设置半径
    void set_R(int R);//函数不需要实体化

    //获取半径
    int get_R();//函数不需要实体化
    
    //设置圆心
    void set_Center(Point center);//函数不需要实体化
    
    //获取圆心
    Point get_Center();//函数不需要实体化
    
private:
    int c_R;//半径
    //在类中可以让另一个类 作为本类中的成员
    Point c_Center;//圆心
};