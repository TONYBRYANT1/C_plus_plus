#include<iostream>
using namespace std;
int main()
{
//1.数组
    // int arr1[]={10,20,30,40,50,60,70,80,90};
    // int i=0;
    // for(i=0;i<9;i++)
    // {
    //     cout << arr1[i] << endl;
    // }


//2.数组名称的用途:
    //int arr1[]={10,20,30,40,50,60,70,80,90,100};
    //1.统计整个数组在内存中的长度
    //cout << sizeof(arr1) << endl;
   // cout << sizeof(arr1[0]) << endl;
    //2.获取数组在内存中的首地址
    //cout << arr1 << endl;   //cout << (int)arr1 << endl;---vs studio可以
    //cout << &arr1[0] << endl;   //cout << &arr1[0] << endl;---vs studio 可以
    //cout << &arr1[1] << endl;
    //3.数组名是常量不可以进行赋值操作
    //(X)arr=100;


//3.找出数组中的最大值
    // int arr[5]={300,850,252,636,729};
    // int i=0;
    // int max=0;
    // int n=0;
    // for(i=0;i<5;i++)
    // {
    //     if(arr[i] > max)
    //     {
    //         max=arr[i];
    //         n=i;
    //     }
    // }
    // cout << "最大值为:" << max << "他是第" << n+1 << "个元素" << endl;
    

//4.数组元素逆置
    // int arr[]={1,2,3,4,5};
    // int start=0;
    // int end = sizeof(arr) / sizeof(arr[0]) - 1;
    // int temp=0;
    // while(start < end)//元素个数为基数:start==end时，3换3，没意义
    //                    //元素个数为偶数:start<end就够了
    // {
    //     temp=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=temp;
    //     start++;
    //     end--;
    // }
    // int i=0;
    // for(i=0;i<5;i++)
    // {
    //     cout << arr[i] << " ";
    // }


//5.冒泡排序----每一轮重新排列之后最大的数冒泡排出
    //外层循环次数=元素个数-1
    //内层循环次数=元素个数-1-当前轮数
    // int arr[9] = {4,2,8,0,5,7,1,3,9};
    // int i=0;
    // int j=0;
    // int temp=0;
    // for(i=0;i<8;i++)
    // {
    //     for(j=0;j<8-i;j++)//内层循环次数与外层循环次数的关系
    //     {
    //         if(arr[j] > arr[j + 1])
    //         {
    //            temp=arr[j];
    //            arr[j]=arr[j+1];
    //            arr[j+1]=temp;
    //         }
 
    //     }
    // }
    // for(i=0;i<9;i++)
    // {
    //     cout << arr[i] << " ";
    // }


//6.二维数组
    // int arr[2][3]=
    // {
    //     {1,2,3},
    //     {4,5,6}
    // };
    // int i=0;
    // int j=0;
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


//7.二维数组的名称用途
    // int arr[2][3]=
    // {
    //     {1,2,3},
    //     {4,5,6}
    // };
    // //1.可以查看占用内存空间大小
    // cout << sizeof(arr) <<endl; //---总共占用内存大小
    // cout << sizeof(arr[0]) <<endl; //---第一行占用的内存大小
    // cout << sizeof(arr[1]) <<endl; //---第二行占用的内存大小
    // cout << sizeof(arr)/sizeof(arr[0]) <<endl; //---二维数组行数
    // cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl; //---二维数组列数
    // //2.可以查看二维数组的首地址
    // cout << arr <<endl;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << &arr[0][0] << endl;


//8.成绩表---考试统计成绩
    // int arr[3][3]=
    // {
    //     {100,100,100},
    //     {90,50,100},
    //     {60,70,80}
    // };
    // string names[3]={"张三","李四","王五"};
    // int i=0;
    // int j=0;
    // for(i=0;i<3;i++)
    // {
    //     int sum =0;
    //     for(j=0;j<3;j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    //     cout << names[i] << "的总成绩为" << sum << "分" << endl;
    //     // cout << "第" << i+1 << "个人的总成绩为" << sum << "分" << endl;
    // }


    //system("pause");
    return 0;
}  