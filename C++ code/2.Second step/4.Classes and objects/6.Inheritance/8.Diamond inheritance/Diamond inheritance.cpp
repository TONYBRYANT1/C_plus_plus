//菱形继承
//概念:
    //两个派生类继承同一个基类
    //又有某个类同时继承着两个派生类
    //这种继承方式称为菱形继承,或者是钻石继承
//
//                         M_age
//                          动物 
//                        --    --
//                    --            --
//           M_age 羊                  驼 M_age
//                    --            --
//                        --     --
//                    M_age 草泥马 M_age       
//菱形继承问题:
//1.羊继承了动物的数据,驼同样继承了动物的数据,当草泥马使用数据时,就会产生二义性
//2.草泥马继承了两份动物的数据,其实我们应该清楚,这份数据我们只需要一份就可以

//答案及解析:
    //M_age这份数据只需要一份即可,而菱形继承会导致Alpaca有多份M_age数据,导致数据浪费
    //利用virtual(虚继承)   解决菱形继承的问题
    //继承之前  加上关键字  virtual   变为虚继承
    //Animal类   称为   虚基类
    //class Sheep : virtual public Animal{};
    //class Camel : virtual public Animal{};
    //相当于Sheep类 和 Camel类 共用了一个M_age(基类成员共享)
   
//     -------------------->     M_age      <---------
//     |          |              Animal              |
//     |          |             --    --             |
//     |          |         --             --        |
//     | M_age(vbptr) Sheep                  Camel M_age(vbptr)
//     |                    --             --
//     |                        --     --
//     --------------M_age(vbptr) Alpaca M_age(自己的成员变量)     
  
//Alpaca的M_age(vbptr) 等同于 Sheep的M_age(vbptr) 等同于 Camel的M_age(vbptr)

//VS strdio 开发人员命令提示符
    //     class Alpaca    size(16):
    //         +---
    //  0      | +--- (base class Sheep)
    //  0      | | {vbptr}
    //         | +---
    //  4      | +--- (base class Camel)
    //  4      | | {vbptr}
    //         | +---
    //  8      | M_age
    //         +---
    //         +--- (virtual base Animal)
    // 12      | M_age
    //         +---

    // Alpaca::$vbtable@Sheep@:
    //  0      | 0
    //  1      | 12 (Alpacad(Sheep+0)Animal)

    // Alpaca::$vbtable@Camel@:
    //  0      | 0
    //  1      | 8 (Alpacad(Camel+0)Animal)
    // vbi:       class  offset o.vbptr  o.vbte fVtorDisp
    //           Animal      12       0       4 0

    //vbptr(虚基类指针)        ------------->        vbtable(虚基类表)
    //v --- virtual(虚拟)                           v --- virtual(虚拟)  
    //b --- base(基类)                              b --- base(基类)
  //ptr --- pointer(指针)                       table --- table(表)

#include<bits/stdc++.h>

using namespace std;

//动物类
class Animal
{
public:
    int M_age;
};

//羊类
class Sheep : virtual public Animal
{

};

//驼类
class Camel : virtual public Animal
{

};

//羊驼类
class Alpaca : public Sheep , public Camel
{
public:
    int M_age;
};

void test01()
{
    Alpaca apc;
    //当菱形继承时,两个父类拥有相同数据,需要加作用域来区分
    apc.Sheep::M_age = 18 ;
    apc.Camel::M_age = 28 ;
    apc.M_age = 38;
    cout << "Sheep——————M_age = " << apc.Sheep::M_age << endl;
    cout << "Camel——————M_age = " << apc.Camel::M_age << endl;
    cout << "Alpaca——-——M_age = " << apc.M_age << endl;

    //M_age这份数据只需要一份即可,而菱形继承会导致Alpaca有多份M_age数据,导致数据浪费
    //利用virtual(虚继承)   解决菱形继承的问题
    //继承之前  加上关键字  virtual   变为虚继承
    //Animal类   称为   虚基类
    //class Sheep : virtual public Animal{};
    //class Camel : virtual public Animal{};
    //相当于Sheep类 和 Camel类 共用了一个M_age(基类成员共享)
//
//     -------------------->     M_age      <---------
//     |          |              Animal              |
//     |          |             --    --             |
//     |          |         --             --        |
//     | M_age(vbptr) Sheep                  Camel M_age(vbptr)
//     |                    --             --
//     |                        --     --
//     --------------M_age(vbptr) Alpaca M_age(自己的成员变量)     
//
//Alpaca的M_age(vbptr) 等同于 Sheep的M_age(vbptr) 等同于 Camel的M_age(vbptr)
//
    //     class Alpaca    size(16):
    //         +---
    //  0      | +--- (base class Sheep)
    //  0      | | {vbptr}
    //         | +---
    //  4      | +--- (base class Camel)
    //  4      | | {vbptr}
    //         | +---
    //  8      | M_age
    //         +---
    //         +--- (virtual base Animal)
    // 12      | M_age
    //         +---
    //
    // Alpaca::$vbtable@Sheep@:
    //  0      | 0
    //  1      | 12 (Alpacad(Sheep+0)Animal)
    //
    // Alpaca::$vbtable@Camel@:
    //  0      | 0
    //  1      | 8 (Alpacad(Camel+0)Animal)
    // vbi:       class  offset o.vbptr  o.vbte fVtorDisp
    //           Animal      12       0       4 0
    //
    //vbptr(虚基类指针)        ------------->        vbtable(虚基类表)
    //v---virtual(虚拟)                              v---virtual(虚拟)  
    //b---base(基类)                                 b---base(基类)
    //ptr---pointer(指针)                            table---table(表)
}

int main()
{
    test01();
    return 0;
}



