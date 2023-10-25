// 3.4 案例-评委打分

    // 3.4.1 案例描述
        // 有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

    // 3.4.2 实现步骤
        // 1. 创建五名选手，放到vector中
        // 2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
        // 3. sort算法对deque容器中分数排序，去除最高和最低分
        // 4. deque容器遍历一遍，累加总分
        // 5. 获取平均分
    
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    Person(string name , int score)
    {
        this->P_Name = name;
        this->P_Score = score;
    }
public:
    string P_Name;
    int P_Score;
};


void Create_Person(vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for(int i=0;i<5;i++)
    {
        string name = "选手";
        name += nameSeed[i];

        int score = 0;

        Person p(name , score);

        //将创建的对象放入容器中
        v.push_back(p);
    }
}

void SetScore(vector<Person>& v)
{
    for(vector<Person>::iterator it = v.begin() ; it !=v.end() ; it++)
    {
        deque<int> d;
        //创建十个分数 , 并放入 d 容器中
        for(int i =0 ;i<10;i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }

        //将这十个分数排序 , 并去掉一个最高分 一个最低分
        sort(d.begin() , d.end());
        d.pop_back();
        d.pop_front();

        int sum = 0;
        for(deque<int>::iterator iit = d.begin() ; iit != d.end() ; iit++)
        {
            sum += *iit;
        }

        //算平均值
        int avg = sum / d.size() ;
        //将值存入 Person 对象中去
        (*it).P_Score = avg; // it->P_Score = sum;
    }
    
}

void ShowScore(vector<Person>& v)
{
    for(vector<Person>::iterator it = v.begin() ; it != v.end() ; it ++)
    {
        cout << "姓名: " << it->P_Name << "   得分: " << it->P_Score << endl;
    }
}

int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));
    
    //创建Person的容器
    vector<Person> v;
    Create_Person(v);

    //测试:
    // for(vector<Person>::iterator it = v.begin() ; it!=v.end() ; it++)
    // {
    //     cout << "姓名: " << (*it).P_Name << " 分数: " << (*it).P_Score << endl;
    // }

    //打分
    SetScore(v);

    //打印成绩
    ShowScore(v);
    return 0;
}