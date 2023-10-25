//函数模版案例
//案例描述:
//1.利用函数模版封装一个排序的函数,可以对 不同的数据类型数组 进行排序
//2.排序规则从大到小,排序算法为选择排序
//3.分别利用char数组和int数组进行测试

#include<bits/stdc++.h>
using namespace std;

//数组排序模版:
template<typename T>
void mySort(T arr[] , int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//打印数组模版
template<typename T>
void PrintArray(T arr[] , int len)
{
    for(int i=0;i<len;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    //测试char函数
    char charArr[] = "badcefg";

    int num1 = sizeof(charArr)/sizeof(charArr[0]);//sizeof会计算字符串中的末尾'\0'

    mySort<char>(charArr,num1);

    PrintArray<char>(charArr,num1);////sizeof会计算字符串中的末尾'\0' , 所以会导致第一个字符为' '

    //测试int函数
    int chararr[] = {1,2,5,3,4,5,6,4,10,7,8};

    int num2 = sizeof(chararr)/sizeof(chararr[0]);

    mySort<int>(chararr,num2);

    PrintArray<int>(chararr,num2);


}

int main()
{
    test01();
    return 0;
}