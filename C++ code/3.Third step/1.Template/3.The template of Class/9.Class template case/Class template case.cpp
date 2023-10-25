//类模板案例
//案例描述:实现一个通用的数组类,要求如下:
//1.可以对内置数据类型以及自定义数据类型的数据进行存储
//2.将数组中的数据存储到堆区
//3.构造函数中可以传入数组的容量
//4.提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//5.提供尾插法和尾删法对数组中的数据进行增加和删除
//6.可以通过下标的方式访问数组中的元素
//7.可以获取数组中当前元素个数和数组的容量

#include<bits/stdc++.h>
#include"MyArray.hpp"
using namespace std;

void Print_Int_Array(MyArray<int> & arr) 
{
    cout << "arr的数据为:" ;
    for(int i = 0 ; i < arr.getSize() ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

void test01()
{ 
    //测试 有参构造 拷贝构造 operator= 析构函数

    // MyArray<int> arr1(5);   //MyArray的有参构造函数调用

    // MyArray<int> arr2(arr1);    //MyArray的有拷贝构造函数调用 (拷贝构造因为初始化时没有在堆区开辟空间,所以不用判断堆区是否为空)

    // MyArray<int> arr3(10);  //MyArray的有参构造函数调用

    // MyArray<int> arr4(10);  
    // arr4 = arr3;    //MyArray的 operator= 调用 (因为调用 operator= 前已经在堆区开辟空间了,所以要先判断堆区是否为空,再深拷贝)

    // MyArray<int> arr5 = arr4;   //MyArray的有拷贝构造函数调用

//  ------------------------------------------------------------------------------------------------

    //测试 [] Push_Back

    MyArray<int> arr1(5);
    for(int i = 0 ; i < 5; i++)
    {
        //利用尾插法向数组中插入数据
        arr1.Push_Back(i);

        //打印
        
    }
    Print_Int_Array(arr1);

    cout << "arr1的容量为: " << arr1.getCapacity() << endl;
    cout << "arr1的大小为: " << arr1.getSize() << endl;

    //测试 Pop_Back

    MyArray<int> arr2(arr1);

    Print_Int_Array(arr2);

    arr2.Pop_Back();

    //尾删后
    cout << "尾删后" << endl;
    Print_Int_Array(arr2);
    cout << "arr2的容量为: " << arr2.getCapacity() << endl;
    cout << "arr2的大小为: " << arr2.getSize() << endl;

}



//测试自定义的数据类型
class Person
{
public:
    Person(){};
    Person(string name , int age)
    {
        this->P_Name = name;
        this->P_Age = age;
    }

public:
    string P_Name;
    int P_Age;

};

void Print_Person_Array(MyArray<Person>& arr)
{
    cout << "蜀军阵营: " << endl; 
    for(int i=0;i<arr.getSize();i++)
    {
        cout << "姓名: " << arr[i].P_Name << "   " << "年龄: " << arr[i].P_Age << endl;  
    }
}

void test02()
{
    MyArray<Person> arr(10);

    Person p1("刘备" , 24);
    Person p2("关羽" , 25);
    Person p3("张飞" , 20);
    Person p4("赵云" , 25);
    Person p5("黄忠" , 45);
    Person p6("马超" , 25);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);
    arr.Push_Back(p6);

    Print_Person_Array(arr);

    cout << "arr的容量为: " << arr.getCapacity() << endl;
    
    cout << "arr的大小为: " << arr.getSize() << endl;
    
}

int main()
{
    //test01();
    test02();
    return 0;
}