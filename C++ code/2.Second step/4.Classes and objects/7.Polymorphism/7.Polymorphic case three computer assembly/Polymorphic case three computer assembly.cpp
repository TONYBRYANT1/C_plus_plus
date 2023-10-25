//多态案例三:电脑组装
//案例描述:
//电脑主要组成部分为 CPU (用于计算), 显卡 (用于显示), 内存条 (用于储存)
//将每个零件封装出抽象基类,并且提供不同的厂商生产不同的零件,例如 Intel 和 Lenovo厂商
//创建电脑类提供让电脑工作的函数,并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

//电脑组装的结构分析:
//         栈                  |               堆
//  intelcpu(CPU)          >------>       ipu(IntelCPU) >------------------------------------------|    
//  intelcard(VideoCard)   >------>       icd(IntelVideoCard) >----------------|                   |
// intelmemory(Memory)     >------>       ime(IntelMemory) >---|               |                   |                                                                                                
//                                                             v               v                   v
// computer1(Computer)    >------->      cpt(Computer) <---intelcpu-------intelcard-----------intelmemory(通过computer1 delete cpt)

//(computer1指针 delete cpt 时会调用computer的析构函数) : 
//因为创建computer1时传入了 1.C_cpu = cpu 2.C_vc = vc 3.C_mem = mem 三个参数
//所以可以顺便将 1.ipu 2.icd 3.ime 三个在堆区创建的具体电脑零件通过指针释放掉
//并且在创建具体电脑时就不用创建零件的基类指针,而直接传入开辟的具体零件的地址就行 : 如computer2

//
//
//
//          ---string C_Name;         ---------------------->          name
//          |
//          |
//          |                                                          IntelCPU(ipu)          -------------
//          ---CPU * C_cpu;           ---------------------->                                             | <---------->CPU
//          |                                                          LenovoCPU(lpu)         -------------
//          |
//          |
//          |
// 电脑类------void work
//          |
//          |
//          |                                                          IntelVideoCard(icd)    -------------
//          ---VideoCard * C_vc;      ---------------------->                                              | <-------->VideoCard
//          |                                                          LenovoVideoCard(lcd)   -------------
//          |
//          |
//          |                                                          IntelMemory(ime)       -------------
//          ---Memory * C_mem;        ---------------------->                                             | <----------->Memory
//                                                                     LenovoMemory(lme)      -------------
// 
// 



#include<bits/stdc++.h>

using namespace std;

//抽象不同零件的类
//抽象CPU类
class CPU
{
public:
    //抽象的计算函数(纯虚函数)
    virtual void Calculate() = 0;
};

class VideoCard
{
public:
    //抽象的显示函数(纯虚函数)
    virtual void Display() = 0;
};

class Memory
{
public:
    //抽象的存储函数(纯虚函数)
    virtual void Storage() = 0;
};

//电脑类
class Computer
{
public:
    Computer(string name , CPU * cpu , VideoCard * vc , Memory * mem)
    {
        C_Name = name;
        cout << C_Name << "电脑" << "开始初始化" << endl;
        C_cpu = cpu;
        C_vc = vc;
        C_mem = mem;
    }
    //提供工作的函数
    void work()
    {
        //让零件工作起来,调用具体的接口
        C_cpu->Calculate();

        C_vc->Display();

        C_mem->Storage();

    }

    //提供析构函数 释放3个电脑零件
    ~Computer()
    {
        cout << C_Name << "电脑" << "开始关机了" << endl;
        //释放CPU零件
        if(C_cpu != NULL)
        {
            delete C_cpu;
            C_cpu = NULL;
        }
        //释放显卡零件
        if(C_vc != NULL)
        {
            delete C_vc;
            C_vc = NULL;
        }
        //释放内存条零件
        if(C_mem != NULL)
        {
            delete C_mem;
            C_mem = NULL;
        }
    }
private:
    CPU * C_cpu;      //CPU零件指针
    VideoCard * C_vc; //显卡零件指针
    Memory * C_mem;   //内存条零件指针
    string C_Name;//给电脑起名字
};

//具体厂商
//Intel厂商
class IntelCPU : public CPU
{
public:
    virtual void Calculate()
    {
        cout << "Intel的CPU开始计算了!" << endl;
    }
};

class IntelVideoCard : public VideoCard
{
public:
    virtual void Display()
    {
        cout << "Intel的显卡开始显示了!" << endl;
    }
};

class IntelMemory : public Memory
{
public:
    virtual void Storage()
    {
        cout << "Intel的内存条开始存储了了!" << endl;
    }
};

//Lenovo厂商
class LenovoCPU : public CPU
{
public:
    virtual void Calculate()
    {
        cout << "Lenovo的CPU开始计算了!" << endl;
    }
};

class LenovoVideoCard : public VideoCard
{
public:
    virtual void Display()
    {
        cout << "Lenovo的显卡开始显示了!" << endl;
    }
};

class LenovoMemory : public Memory
{
public:
    virtual void Storage()
    {
        cout << "Lenovo的内存条开始存储了了!" << endl;
    }
};

//         栈                  |               堆
//  intelcpu(CPU)          >------>       ipu(IntelCPU) >------------------------------------------|    
//  intelcard(VideoCard)   >------>       icd(IntelVideoCard) >----------------|                   |
// intelmemory(Memory)     >------>       ime(IntelMemory) >---|               |                   |                                                                                                |
//                                                             v               v                   v
// computer1(Computer)    >------->      cpt(Computer) <---intelcpu-------intelcard-----------intelmemory(通过computer1 delete cpt)

//(computer1指针 delete cpt 时会调用computer的析构函数) : 
//因为创建computer1时传入了 1.C_cpu = cpu 2.C_vc = vc 3.C_mem = mem 三个参数
//所以可以顺便将 1.ipu 2.icd 3.ime 三个在堆区创建的具体电脑零件通过指针释放掉
//并且在创建具体电脑时就不用创建零件的基类指针,而直接传入开辟的具体零件的地址就行 : 如computer2

void test01()
{
    cout << "第一台电脑开始工作:" << endl;
    //第一台电脑零件                                    
    CPU * intelcpu = new IntelCPU; 
    VideoCard * intelcard = new IntelVideoCard;
    Memory * intelmemory = new IntelMemory;    
    Computer * computer1 = new Computer("正版Intel" , intelcpu , intelcard , intelmemory);
    computer1->work();
    delete computer1;
    computer1 = NULL;

    //换行符:
    cout << endl;
    cout << "--------------------------" << endl;
    cout << endl;
    
    cout << "第二台电脑开始工作:" << endl;                                                                                                  
    //创建第二台电脑                     
    Computer * computer2 = new Computer("正版Lenovo" , new LenovoCPU , new LenovoVideoCard , new LenovoMemory);                    
    computer2->work();
    delete computer2;
    computer2 = NULL;

    //换行符:
    cout << endl;
    cout << "--------------------------" << endl;
    cout << endl;

    cout << "第三台电脑开始工作:" << endl;
    //创建第三台电脑
    Computer * computer3 = new Computer("Intel&Lenovo组装版" , new IntelCPU , new LenovoVideoCard , new IntelMemory);
    computer3->work();
    delete computer3;
    computer3 = NULL;

}

int main()
{
    test01();
    return 0;
}