//多态的原理剖析
#include<bits/stdc++.h>

using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal
{
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal
{
    void speak()
    {
        cout << "小狗在说话" << endl;
    }
};

void DoSpeak(Animal& animal)
{
    animal.speak();
}

void test01()
{
    Cat cat;
    Dog dog;
    DoSpeak(cat);
    DoSpeak(dog);
}

void test02()
{
    //对于含有 void speak()函数的Animal类,sizeof(Animal) = 1;(C++编译器会给每个空对象也分配一个字节空间,是为了 区分 空对象占内存的位置)
    //类只是一种类型,没有大小可言。使用sizeof得到的大小,只是它的实例化对象的大小,所以类的大小与对象的大小是一样的。
    //只有非静态成员变量才属于类的对象上
    //cout << "sizeof Animal = " << sizeof(Animal) << endl;

    //对于含有 virtual void speak()函数的Animal类,sizeof(Animal) = 8;
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
    //Animal类的内部结构:
    // class Animal    size(4):
    //         +---
    //  0      | {vfptr}                               vfptr(虚函数(表)指针)    --->    vftable(虚函数表):表内记录函数地址
    //         +---                                    v --- virtual(虚拟)             v --- virtual(虚拟)  
    //                                                 f --- function(函数)            f --- function(函数)
    // Animal::$vftable@:                            ptr --- pointer(指针)         table --- table(表)
    //         | &Animal_meta
    //         |  0
    //  0      | &Animal::speak

    // Animal::speak this adjustor: 0

    //Cat类的内部结构(类内重写speak):           vs          Cat类的内部结构(类内重写speak):                           
    // class _s__CatchableType size(28):                    class _s__CatchableType size(28):
    //         +---                                                 +---
    //  0      | properties                                  0      | properties
    //  4      | pType                                       4      | pType
    //  8      | _PMD thisDisplacement                       8      | _PMD thisDisplacement
    // 20      | sizeOrOffset                               20      | sizeOrOffset
    // 24      | copyFunction                               24      | copyFunction
    //         +---                                                 +---

    // class _s__CatchableTypeArray    size(4):             class _s__CatchableTypeArray    size(4):
    //         +---                                                 +---
    //  0      | nCatchableTypes                             0      | nCatchableTypes
    //  4      | arrayOfCatchableTypes                       4      | arrayOfCatchableTypes
    //         +---                                                 +---

    // class Cat       size(4):                             class Cat       size(4):
    //         +---                                                 +---
    //  0      | +--- (base class Animal)                    0      | +--- (base class Animal)
    //  0      | | {vfptr}                                   0      | | {vfptr}
    //         | +---                                               | +---
    //         +---                                                 +---

    // Cat::$vftable@:                                      Cat::$vftable@:
    //         | &Cat_meta                                          | &Cat_meta
    //         |  0                                                 |  0
    //  0      | &Animal::speak               vs             0      | &Cat::speak   --------------------------------->  子类的 vftable 内部会替换成子类的虚函数地址

    //                                                      Cat::speak this adjustor: 0

    //分析:
    //1.当Animal类内部的speak函数前未加virtual:
    //Animal类的状态:
    //class Animal    size(1):
    //        +---
    //        +---
    
    //cat类的状态:
    // class _s__CatchableType size(28):
    //         +---
    //  0      | properties
    //  4      | pType
    //  8      | _PMD thisDisplacement
    // 20      | sizeOrOffset
    // 24      | copyFunction
    //         +---
    //
    // class _s__CatchableTypeArray    size(4):
    //         +---
    //  0      | nCatchableTypes
    //  4      | arrayOfCatchableTypes
    //         +---
    //
    // class Cat       size(1):
    //         +---
    //  0      | +--- (base class Animal)
    //         | +---
    //         +---

    //二者都是空类,且属于静态多态的函数地址早绑定 - 编译阶段确定函数地址
    //因为函数地址已经提前绑定,所以无论DoSpeak函数里引用的是父类对象 还是 子类对象,都将调用Animal类内的speak函数
    
    //2.当Animal类内部的speak函数前加了virtual:
    //Animal类的状态:
    // class Animal    size(4):
    //         +---
    //  0      | {vfptr}
    //         +---
    //
    // Animal::$vftable@:
    //         | &Animal_meta
    //         |  0
    //  0      | &Animal::speak
    
    //Cat类的状态:
    // class _s__CatchableType size(28):
    //         +---
    //  0      | properties
    //  4      | pType
    //  8      | _PMD thisDisplacement
    // 20      | sizeOrOffset
    // 24      | copyFunction
    //         +---
    //
    // class _s__CatchableTypeArray    size(4):
    //         +---
    //  0      | nCatchableTypes
    //  4      | arrayOfCatchableTypes
    //         +---
    //
    // class Cat       size(4):
    //         +---
    //  0      | +--- (base class Animal)
    //  0      | | {vfptr}
    //         | +---
    //         +---
    //
    // Cat::$vftable@:
    //         | &Cat_meta
    //         |  0
    //  0      | &Animal::speak

    //因为Animal类中的speak函数前面加了virtual,所以属于动态多态的函数地址晚确定 - 运行阶段确定函数地址
    //如果Cat类中没有重写speak函数,因为继承关系,则Cat类的vftable中的内容储存的是Animal类的speak函数的地址(&Animal::speak)
    //那么调用cat.speak时还是调用的是Animal类中的speak函数
    //如果Cat类中重写了speak函数,则Cat类的vftable中的内容储存的是Cat类的speak函数的地址(&Animal::speak)
    //那么调用cat.speak时调用的是Cat类中的speak函数
}

int main()
{
    test01();
    test02();
    return 0;
}