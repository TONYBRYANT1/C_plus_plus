//多态案例二:制作饮品
//案例描述:
//制作饮品的大致流程为:煮水 - 冲泡 - 倒入杯中 - 加入辅料
//利用多态技术实现本案例,提供抽象制作饮品基类,提供子类制作咖啡和茶叶
//制作咖啡:煮水 - 冲泡咖啡 - 倒入杯中 - 加糖和牛奶
//制作茶水:煮水 - 冲泡茶叶 - 倒入杯中 - 加入柠檬
#include<bits/stdc++.h>

using namespace std;

//多态实现制作饮品:
class AbstractDrinking
{
public:
    //煮水:
    virtual void Boil() = 0;

    //冲泡:
    virtual void Brew() = 0;

    //倒入杯中:
    virtual void PourInCup() = 0;

    //加入辅料:
    virtual void PutSomething() = 0;

    //制作饮品:
    void MakeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

//制作咖啡:
class Coffee : public AbstractDrinking
{
public:
    //煮水:
    void Boil()
    {
        cout << "煮水" << endl;
    }

    //冲泡:
    void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    //倒入杯中:
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    //加入辅料:
    void PutSomething()
    {
        cout << "加入糖和牛奶"  << endl;
    }

};

//制作茶叶:
class Tea : public AbstractDrinking
{
public:
    //煮水:
    void Boil()
    {
        cout << "煮水" << endl;
    }

    //冲泡:
    void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    //倒入杯中:
    void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    //加入辅料:
    void PutSomething()
    {
        cout << "加入柠檬"  << endl;
    }

};

void DoMakeDrink(AbstractDrinking * abs)//AbstractDrinking * abs = new Coffee(父类的指针或者引用    指向子类对象)
{
    abs->MakeDrink();//接口:一个接口有多种形态--->多态
    delete abs;
    abs = NULL;
    //MakeDrink()内的函数是去子类中寻找自己的实现
    // void MakeDrink()
    // {
    //     Boil();
    //     Brew();
    //     PourInCup();
    //     PutSomething();
    // }
}

void test01()
{
    //制作咖啡:
    cout << "制作咖啡步骤:" << endl;
    DoMakeDrink(new Coffee);
    cout << endl;
    cout << "制作茶水步骤:" << endl;
    DoMakeDrink(new Tea);
}

int main()
{
    test01();
    return 0;
}