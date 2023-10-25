#pragma once 
#include<bits/stdc++.h>
using namespace std;
template<class T>
class MyArray
{
public:
    //有参构造
    MyArray(int capacity)
    {
        //cout << "MyArray的有参构造函数调用" << endl;

        this->M_Capacity = capacity;
        this->M_Size = 0;
        this->M_P = new T[this->M_Capacity]; //T() 和 T[]
    }

    //拷贝构造
    MyArray(const MyArray& arr)
    {
        //cout << "MyArray的有拷贝构造函数调用" << endl;

        this->M_Capacity = arr.M_Capacity;
        this->M_Size = arr.M_Size;
        //this->M_P = arr.M_P (浅拷贝)(导致堆区堆区的数据重复释放)

        //深拷贝
        this->M_P = new T[this->M_Capacity]; //T() 和 T[]

        //将arr中的数据都拷贝过来
        for(int i=0;i<this->M_Size;i++)
        {
            this->M_P[i] = arr.M_P[i];
        } 
    }

    //operator= 防止浅拷贝问题
    MyArray& operator=(const MyArray& arr)
    {
        //cout << "MyArray的 operator= 调用" << endl;

        //先看指针指向的堆区有没有东西
        if(this->M_P != NULL)
        {
            delete[] this->M_P;
            this->M_P = NULL;
            this->M_Capacity = 0;
            this->M_Size = 0;
        }

        //深拷贝
        this->M_Capacity = arr.M_Capacity;
        this->M_Size = arr.M_Size;
        this->M_P = new T[this->M_Capacity]; //T() 和 T[]

        //将arr中的数据都拷贝过来
        for(int i=0;i<this->M_Size;i++)
        {
            this->M_P[i] = arr.M_P[i];
        } 

        //返回本身
        return *this;

    }

    //尾插法
    void Push_Back(const T& val)
    {
        //判断容量够不够
        if(this->M_Size == this->M_Capacity)
        {
            cout << "满载 无法添加" << endl;
            return ;
        }

        this->M_P[this->M_Size] = val; //在数组末尾插入数据
        this->M_Size++;//更新数组大小
    }

    //尾删法
    void Pop_Back()
    {
        //让用户访问不到最后一个元素,即为尾删法 , 逻辑删除
        if(this->M_Size == 0)
        {
            return ;
        }
        this->M_Size--;
    }

    //通过下标方式访问数组中的元素(因为MyArray是我们自定义的数据类型 所以不能直接用[]访问数据)
    T& operator[](int index) //T& --- 可以真正访问到数组的参数
    {
        return this->M_P[index];
    }

    //返回数组容量
    int getCapacity()
    {
        return this->M_Capacity;
    }

    //返回数组大小
    int getSize()
    {
        return this->M_Size;
    }

    //析构函数
    ~MyArray()
    {
        //cout << "MyArray的析构函数调用" << endl;
        
        if(this->M_P != NULL)
        {
            delete[] this->M_P;
            this->M_P = NULL;
            this->M_Capacity = 0;
            this->M_Size = 0;
        }
    }
private:
    T * M_P; //指针指向堆区开辟的真是数组
    int M_Capacity; //数组容量
    int M_Size; //数组大小
};