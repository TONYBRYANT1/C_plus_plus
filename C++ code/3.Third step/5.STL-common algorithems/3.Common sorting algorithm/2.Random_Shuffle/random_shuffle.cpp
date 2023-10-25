// random_shuffle

// 功能描述：
    //     洗牌 --- 指定范围内的元素随机调整次序

// 函数原型：
    //     srand((unsigned int) time (NULL))
    //     random_shuffle(iterator beg, iterator end); 

  // 指定范围内的元素随机调整次序

  // beg 开始迭代器

  // end 结束迭代器

//总结:random_shuffle 洗牌算法比较实用 , 使用时记得加 随机数种子

#include<bits/stdc++.h>
using namespace std;

void MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    //随机种子
    srand((unsigned int) time (NULL));

    vector<int> v;

    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    
    //原来
    cout << "初始:" << endl;
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

    //洗牌
    random_shuffle(v.begin() , v.end());

    //洗牌后
    for_each(v.begin() , v.end() , MyPrint);
    cout << endl;

}
int main()
{
    test01();
    return 0;
}
