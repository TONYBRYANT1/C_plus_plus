//虚析构和纯虚析构
//多态使用时,如果子类中有属性开辟到堆区,那么父类指针在释放子类对象时无法调用到子类的析构代码
//解决方式:将父类中的析构函数改为虚析构 或 纯虚析构
//(父类引用子类对象时不会出现这样的问题)

//虚析构和纯虚析构的共性:
//1.可以解决父类指针释放子类对象时不干净的问题
//2.都需要有具体的函数实现(可以为空,但是要看情况)

//虚析构和纯虚析构的区别:
//1.如果是纯虚析构,该类属于抽象类,无法实例化对象

//虚析构:
    // virtual ~Animal()
    // {
    //     cout << "Animal的默认析构函数调用" << endl;
    // }

//纯虚析构:
    // 类内:virtual ~Animal() = 0;
    // 类外:Animal::~Animal()

//总结:
//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//2.如果子类中没有堆区数据,可以不写为虚析构或纯虚析构
//3.拥有纯虚析构函数的类也属于抽象类

#include<bits/stdc++.h>

using namespace std;

//虚析构和纯虚析构
class Animal
{
public:
    Animal()
    {
        cout << "Animal的默认构造函数调用" << endl;
    }
    virtual void Speak() = 0;
    //虚析构:
    // virtual ~Animal()
    // {
    //     cout << "Animal的默认析构函数调用" << endl;
    // }
    //纯虚析构:
    virtual ~Animal() = 0;
    
};
//纯虚析构:
Animal::~Animal()
{
    cout << "Animal的默认析构函数调用" << endl;
}

class Cat : public Animal
{
public:
    Cat(string name)
    {
        cout << "Cat的构造函数调用" << endl;
        C_Name = new string(name);
    }
    void Speak()
    {
        cout << *C_Name << "小猫在说话" << endl;
    }
    ~Cat()
    {
        if(C_Name != NULL)
        {
            cout << *C_Name << "小猫的析构函数" << endl;
            cout << "4" << endl;
            delete C_Name;
            cout << "5" << endl;
            C_Name = NULL;
            cout << "6" << endl;
        }
    }
public:
    string* C_Name;
};

void test01()
{                                               //运行结果打印:
    Animal * animal = new Cat("Tom");           //Animal的默认构造函数调用,Cat的构造函数调用 
    animal->Speak();                            //Tom小猫在说话
    cout << "将new的小猫对象删除" << endl;       //将new的小猫对象删除
    cout << "1" << endl;                        //1
    delete animal;                              //Animal的默认析构函数调用
    cout << "2" << endl;                        //2
    animal = NULL;                              //
    cout << "3" << endl;                        //3
    
    //问题1:先创建父类对象,再创建子类对象,为什么delete的时候只析构了父类对象而没有析构子类对象呢?、
    //问题总结:父类指针释放子类对象时不干净的问题

    //解析1:用父类指针在释放子类对象堆区内存时(delete animal --- 析构堆区中开辟的Cat对象时)是不会调用子类中析构函数的
    //导致子类如果有堆区属性,会出现内存泄露的情况出现

    //问题2:子类对象因为没有被析构,导致子类对象再堆区开辟的空间没有释放,造成了内存泄漏,这该如何DEBuG呢？
    //问题总结:如何解决父类指针释放子类对象时不干净的问题呢？

    //解析2:
    //解决方法1:将Animal类中的析构函数变成虚析构(前面加virtual) --------------虚析构
    //虚析构可以不实现(可以内容为空),在必要的时候自己添加

    //解决方法2:将Animal类中的析构函数变成纯虚析构             --------------纯虚析构
    //类内声明: virtual ~Animal() = 0;
    //类外实现: Animal::~Animal(){...}
    //有了纯虚析构之后,这个类也属于抽象类,无法实例化对象
}

int main()
{
    test01();
    return 0;
}