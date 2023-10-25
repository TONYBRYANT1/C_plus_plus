

#include<bits/stdc++.h>
using namespace std;

class Person 
{
public:
    //有参构造函数
    Person(int height):pp(new int(height))
    {
        cout << "Person的有参构造函数调用" << endl;
    }
    //深拷贝
    Person(const Person& p)
    {
        pp = new int(*p.pp);
        cout << "Person的深拷贝函数调用" << endl;
    }
    //浅拷贝plus版
    Person(Person& p):pp(p.pp)
    {
        p.pp = NULL;
        cout << "Person的浅拷贝函数plus版调用" << endl;;
    }
    ~Person()
    {
        if(pp!=NULL)
        {
            delete pp;
            pp = NULL;
        }
        cout << "Person的析构函数调用" << endl;
    }

    int *pp;
};

Person get_temporary_object()
{
    Person p1(100);
    return p1;
}
int main()
{
    Person p2(get_temporary_object());
    cout << *p2.pp << endl;
    return 0;
}