//一元谓词
#include<bits/stdc++.h>
using namespace std;

class Greater_Than_Five
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
public:
};

void test01()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    //查找容器中 有没有大于 5 的数字
    //匿名的函数对象
    vector<int>::iterator it = find_if(v.begin() , v.end() , Greater_Than_Five());
    if(it == v.end())
    {
        cout << "没找到" << endl;
    }
    else
    {
        cout << "找到了大于 5 的数字为: " << *it << endl;
    }
    
}


int main()
{
    test01();
    return 0;
}