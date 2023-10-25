#include<iostream>
using namespace std;

// void swap(int *p,int *q)
// {
//     int temp = *p;
//     *p=*q;
//     *q=temp;
// }


// void BubbleSort(int *p,int len)// p是指向arr数组的指针可以直接用p[]来改变arr中的实参
// {
//     int i=0;
//     int j=0;
//     for(i=0;i<len-1;i++)
//     {
//         for(j=0;j<len-1-i;j++)
//         {
//             if(p[j]>p[j+1])
//             {
//                 int temp = p[j];
//                 p[j] = p[j+1];
//                 p[j+1] = temp;
//             }          
//         }
//     }
// }


// void PrintArray(int *arr,int len)
// {
//     for(int i=0;i<len;i++)
//     {
//         cout << arr[i] << endl;
//     }
// }


int main()
{
//1.指针
    // int a=0;
    // int * p=&a;
    // cout << &a << endl;
    // cout << p << endl;
    // *p=10000;
    // cout << a << endl;
    // cout << a << endl;  


//2.指针所占用的内存空间
    // int a=0;
    // int *p = &a;
    // cout << sizeof(p) << endl;//32位机指针占用4字节，64位机指针占用8字节
    // cout << sizeof(int *) << endl;
    // cout << sizeof(short *) << endl;
    // cout << sizeof(char *) << endl;
    // cout << sizeof(float *) << endl;
    // cout << sizeof(double *) << endl;


//3.空指针和野指针
    //1.空指针用于初始化指针变量
    //int * p =NULL;
    //*p = 100;
    //Exception(例外) has occurred.Segmentation(分割) fault
    //2.空指针指向的变量是不可以访问的
    //0~255之间的内存编号是系统占用的，因此不可以访问
    //3.野指针:指针变量指向非法的内存空间
    //int * p=(int *)0x1100; --- 相当于随便地址开了房间
    //cout << *p << endl; 


//4.const修饰
    //1.const修饰指针---常量指针(可以更换所指向的对象，但是不能更改指向对象的值)
    // int a=0;
    // const int * p = &a;
    //*p=10;//expression must be a modifiable value
    // int b=0;
    // p=&b;//(V)
    //*p=10;//expression must be a modifiable value
    //2.const修饰的指针---指针常量(可以更换所指对象的值，但是不能更改所指对象)
    // int a=0;
    // int * const p=&a;
    // int b=0;
    //p=&b;(X)
    //*p=10;//(V)
    //3.const修饰的指针---修饰指针又修饰常量(不能更换所指对象和对象的值)
    // int a=0;
    // const int * const p=&a;
    // int b=0;
    //p=&b;//(X)
    //*p=10;//(X)


//5.指针和数组:利用指针访问数组中的元素
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // cout << "第一个元素为:" << arr[0] << endl;
    // int *p=arr;//arr就是数组的首元素地址
    // cout << "利用指针访问第一个元素:" << *p << endl;
    // p++;//整形指针++后跳到下一个整形元素
    // cout << "利用数组访问第二个元素:" << *p << endl;
    // cout << "利用指针遍历数组" << endl;
    // int *p2=arr;
    // int i=0;
    // for(i=0;i<10;i++)
    // {
    //     cout << *p2 << endl;
    //     p2++; 
    // }


//6.指针和函数:1.值传递(实参/形参) 2.址传递(可以改变实参)
    // int a=10;
    // int b=20;
    // swap(&a,&b);
    // cout << a << endl;
    // cout << b << endl;
    // swap(&a,&b);
    // cout << a << endl;
    // cout << b << endl;


//7.指针，数组，函数
    // int arr[10]={9,6,3,10,5,2,7,8,1,4};
    // int len=sizeof(arr)/sizeof(arr[0]);
    // BubbleSort(arr,len);//arr---数组首地址
    // // int *p=arr;
    // // int i=0;
    // // for(i=0;i<len;i++)
    // // {
    // //     cout << *p << endl;
    // //     p++;
    // // }
    // PrintArray(arr,len);










    // system("pause");
    return 0;
}