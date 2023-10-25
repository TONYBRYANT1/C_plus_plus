// 3.10.2 实现步骤

// 1. 创建10名员工，放到vector中
// 2. 遍历vector容器，取出每个员工，进行随机分组
// 3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
// 4. 分部门显示员工信息

#include<bits/stdc++.h>
using namespace std;
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
    Worker()
    {
        ;
    }
    Worker(string name , int salary)
    {
        W_Name = name;
        W_Salary = salary;
    }
public:
    string W_Name;
    int W_Salary;
};

void CreateWorker(vector<Worker>& v)
{
    string Worker_Name_Seed = "ABCDEFGHIJ";
    for(int i=0;i<10;i++)
    {
        //创建员工
        Worker worker; //默认构造
        //员工姓名:
        worker.W_Name = "员工";
        worker.W_Name += Worker_Name_Seed[i];
        //员工薪水:
        worker.W_Salary = rand()%10000 + 10001; //10001 ~ 20000
        //将员工存入 v 中
        v.push_back(worker);
    }
}

void Print_Vector(const vector<Worker>& v)
{
    for(vector<Worker>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << "姓名: " << it->W_Name << "   薪水: " << it->W_Salary << endl;
    }
    cout << endl;
}

void SetGroup(const vector<Worker>& v , multimap<int , Worker>& m)
{
    for(vector<Worker>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        //产生随机部门编号
        int Group_ID = rand()%3; // 0 1 2

        //将员工插入到分组中
        //key --- 部门编号
        //value --- 具体员工
        m.insert(make_pair(Group_ID , *it));
    }
}

void Show_Worker_By_Group(multimap<int , Worker>& m)
{
    cout << "策划部门:" << endl;
    multimap<int , Worker>::iterator pos = m.find(CEHUA);
    int count = m.count(CEHUA); // 统计具体人数
    int index = 0;
    for(pos ; (pos != m.end()) && (index < count)  ; pos++ , index++)
    {
        cout << "姓名: " << pos->second.W_Name << "   工资: " << pos->second.W_Salary << endl;
    }
    cout << endl;

    cout << "美术部门:" << endl;
    pos = m.find(MEISHU);
    count = m.count(MEISHU); // 统计具体人数
    index = 0;
    for(pos ; (pos != m.end()) && (index < count)  ; pos++ , index++)
    {
        cout << "姓名: " << pos->second.W_Name << "   工资: " << pos->second.W_Salary << endl;
    }
    cout << endl;

    cout << "研发部门:" << endl;
    pos = m.find(YANFA);
    count = m.count(YANFA); // 统计具体人数
    index = 0;
    for(pos ; (pos != m.end()) && (index < count)  ; pos++ , index++)
    {
        cout << "姓名: " << pos->second.W_Name << "   工资: " << pos->second.W_Salary << endl;
    }
    cout << endl;

}

int main()
{
    srand((unsigned int)time(NULL));
    //1.创建员工:
    vector<Worker>vWorker;
    CreateWorker(vWorker);
    //测试:
    //Print_Vector(vWorker);

    //2.员工分组:
    multimap<int , Worker> mWorker;
    SetGroup(vWorker , mWorker);

    //分组显示员工
    Show_Worker_By_Group(mWorker);
    return 0;
}

