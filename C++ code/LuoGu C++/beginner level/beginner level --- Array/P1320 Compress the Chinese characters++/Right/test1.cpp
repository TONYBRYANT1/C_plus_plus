#include<bits/stdc++.h>
using namespace std;
char a = '0';   //输入
char b = '0';   //判断
int n=0;   //计数器
int arr[100]={0};
int k=0;   //在内部操作数组
int main()                      //000111000111
                                //111000111000
{
    while(cin >> a)
    {
        n++;
        if(a == b)
        {
            arr[k]++;
        }
        else
        {
            arr[++k]++;
        }

        //对于后一个数的判断需要前一个数的参照
        b = a;
    }

    cout << sqrt(n) << " ";

    for(int i=0;i<=k;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}