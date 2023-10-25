#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[30];
    //gets(arr);    gets()函数被禁用了
    fgets(arr,sizeof(arr),stdin); // fgets(arr , sizeof(arr) , stdin) <==> gets(arr) 但是 fgets() 要比 gets() 安全
    int ret = strlen(arr);
    int count=0;
    for(int i=0 ; i<ret ; i++)
    {
        if(arr[i]>='a' && arr[i]<='z')
        {   
            count++;
        }   
        else if(arr[i]>='A' && arr[i]<='Z')
        {
            count++;
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}