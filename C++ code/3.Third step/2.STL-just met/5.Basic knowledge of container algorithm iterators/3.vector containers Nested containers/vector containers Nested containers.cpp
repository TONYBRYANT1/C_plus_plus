//Vector容器(数组) 嵌套 容器(数组)  ==>  二维数组
//学习目标:容器中嵌套容器,我们将所有数据进行遍历输出

#include<vector>
#include<bits/stdc++.h>
using namespace std;

void test01()
{
    //创建嵌套容器的容器
    vector<vector<int>> v;
    //创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    //向小容器中添加数据
    for(int i=0 ; i < 5 ; i++)  
    {
        v1.push_back(i);
        v2.push_back(i+1);
        v3.push_back(i+2);
        v4.push_back(i+3);
        v5.push_back(i+4);
    }

    //将小容器添加到大容器中
        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);
        v.push_back(v4); 
        v.push_back(v5);

//                                       i t
//                                        |
//                                        |
//                                    ---------
//                                    |       |
//                                    v       v
//
//0 1 2 3 4         1 2 3 4 5         2 3 4 5 6         3 4 5 6 7         4 5 6 7 8        
//                                    ^
//                                    |
//                                   iit

    //遍历二维容器的数据
    for(vector< vector<int> >::iterator it = v.begin() ; it != v.end() ; it++ )
    {
        //  it -> vector<int> v1 
        for(vector<int>::iterator vit = (*it).begin() ; vit != (*it).end() ; vit++)
        {
            cout << *vit << " " ;
        }
        cout << endl;
    }
    
}

int main()
{
    test01();
    return 0;
}