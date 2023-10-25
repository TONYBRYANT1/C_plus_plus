//全局函数做友元:
#include<bits/stdc++.h>
using namespace std;

//家
class Building
{
//GoodGay全局函数时Building的好朋友,可以访问Building中的私有成员
friend void GoodGay(Building *building);
public:
   Building()
    {
        B_SittingRoom = "客厅";
        B_BedRoom = "卧室";
    }
public:
    string B_SittingRoom;// 客厅
private:
    string B_BedRoom;// 卧室
};

//全局函数
void GoodGay(Building *building)
{   
    cout << "好基友全局函数,正在访问:" << building->B_SittingRoom << endl;
    cout << "好基友全局函数,正在访问:" << building->B_BedRoom << endl;

}

void test01()
{
    Building building;
    GoodGay(&building);
}
int main()
{
    test01();
    return 0;
}

