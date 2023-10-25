#include<bits/stdc++.h>
using namespace std;

int arr[10]={12,21,23,32,34,43,45,54,56,65};

void printArray()
{
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    //C++中前后置++和*的优先级比较:后置++ > 前置++ = *
    int*p=arr;//整形指针指向arr首地址 p->arr[0]

    //1.优先级:左置++ = *
    // cout << *++p << endl;//先p->arr[1],再取值   --->21(不改变整形数组的值)(p移动)
    // printArray();

    // cout << ++*p << endl;//先去arr[0]的值,再将arr[0]的值+1,再cout出来(打印出来)   --->13(改变了整形数组第一个元素的值)(p不移动)
    // printArray();

    //2.优先级:右置++ > *
    // cout << *p++ << endl;//先p++,但是p先不动,取了*p之后,p再++
    // cout << *p << endl;
    // printArray();

    // cout << *(p++) << endl;//和*p++一个道理
    // cout << *p << endl;
    // printArray();

    // cout << (*p)++ << endl;//将(*p)强结合,先去*p的值,并且cout出来,再将*p的值+1,从而修改数组元素的值
    // cout << *p << endl;
    // printArray();


    //system("pause");
    return 0;
}