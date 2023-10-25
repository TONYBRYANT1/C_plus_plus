//类做友元:
//有两个类:1.家(Building) 2.好基友(GoodGay)
//其中GoodGay构造building的类指针,通过类内成员函数visit()对building所指向的对象进行成员变量的访问
//friend class GoodGay;是能访问的前提
#include<bits/stdc++.h>
using namespace std;

class Building
{
friend class GoodGay;
public:
    Building();//   类内声明
public:
    string B_SittingRoom;
private:
    string B_BedRoom;
};

//类外初始化
Building::Building()
{
    B_SittingRoom = "客厅";
    B_BedRoom = "卧室";
}

class GoodGay
{
public:
    GoodGay();//    类内声明
    void visit();// 参观函数 访问Building中的属性
private:
    Building * building;
};

GoodGay::GoodGay()
{
    building = new Building;
}

void GoodGay::visit()
{
    cout << "好基友类正在访问:" << building->B_SittingRoom << endl;
    cout << "好基友类正在访问:" << building->B_BedRoom << endl;
}

int main()
{
    GoodGay gg;
    gg.visit();
    return 0;
}
