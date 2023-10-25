//成员函数做友元
//类:1.家(Building) 2.好基友(GoodGay)
//1中成员:1.B_SittingRoom(public) 2.BedRoom(private)
//2中成员:building(Building*)
//好基有gg通过其成员函数visit1/2使用building来访问1.B_SittingRoom 2.BedRoom
//其中visit1和Building有友元关系,所及既可以访问B_SittingRoom(public)   又可以访问BedRoom(private)
//而visit2和Building没有友元关系,所以只能够访问B_SittingRoom(public)   不可以访问BedRoom(private)
#include<bits/stdc++.h>
using namespace std;

class Building;
class GoodGay
{
public:
    GoodGay();
    void visit1();  //让visit1 函数可以访问Building中私有的成员
    void visit2();  //让visit2 函数不能访问Building中私有的成员
private:
    Building * building;
};

class Building
{friend void GoodGay::visit1();//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友,可以访问私有的成员
public:
    Building();
public:
    string B_SittingRoom;
private:
    string B_BedRoom;
};

Building::Building()
{
    B_SittingRoom = "客厅";
    B_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
    building = new Building; 
}

void GoodGay::visit1()
{
    cout << "visit1 函数正在访问:" << building->B_SittingRoom << endl;
    cout << "visit1 函数正在访问:" << building->B_BedRoom << endl;

}
void GoodGay::visit2()
{
    cout << "visit1 函数正在访问:" << building->B_SittingRoom << endl;
    //cout << "visit1 函数正在访问:" << building->B_BedRoom << endl; //visit2和Building没有友元关系
}

test01()
{
    GoodGay gg;
    gg.visit1();
    gg.visit2();
}

int main()
{
    test01();
    return 0;
}