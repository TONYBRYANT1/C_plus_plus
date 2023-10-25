#include<bits/stdc++.h>
using namespace std;

class MyCompare
{
public:
    bool operator()(int v1 , int v2)
    {
        return v1 > v2 ;
    }
public:
};

void Print_Vector(const vector<int>& v)
{
    for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    v.push_back(30);

    cout << "c:" << endl;
    Print_Vector(v);

    //sort 排序
    cout << "升序:" << endl;
    sort(v.begin() , v.end());
    Print_Vector(v);

    //sort排序重载
    cout << "降序:" << endl;
    sort(v.begin() , v.end() , MyCompare());
    Print_Vector(v);


}
int main()
{
    test01();
    return 0;
}