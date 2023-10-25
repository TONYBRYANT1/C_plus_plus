//继承中的对象模型
//问题:从父类继承过来的成员,哪些属于子类对象中？
//答案:从父类中所有非静态成员属性都会被子类继承下去
//父类中私有成员属性,是被编译器给隐藏了,因此是访问不到的,但是确实被继承下去了

//利用开发人员命令提示工具查看对象模型
//1.跳转盘符    D:
//2.跳转文件路径    cd 具体路径下
//3.查看命令    cl /d1 reportSingleClassLayout类名 "文件名"
 
#include<bits/stdc++.h>

using namespace std;

class Base
{
public:
    int B_a;
protected:
    int B_b;
private:
    int B_c;
};

class Son : public Base
{
public:
    int S_d;
};

void test01()
{
    cout << "size of Son = " << sizeof(Son) << endl;
}

int main()
{
    test01();
    return 0;
}
