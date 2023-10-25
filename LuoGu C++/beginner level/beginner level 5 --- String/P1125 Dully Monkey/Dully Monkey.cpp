#include<bits/stdc++.h>
using namespace std;

bool IsPrime(int n) // 判断 2~无穷 的质数
{
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str;
    int arr[27] = {0};
    cin >> str;
    int ret = str.length();
    for(int i=0 ; i<ret ; i++)
    {
        arr[int(str[i])-96]++;
    }
    
    // for(int i=1 ; i<=26 ; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int maxx = arr[0];
  
    for(int i=1 ; i<= 26 ; i++)
    {
        if(arr[i]>maxx)
        {
            maxx = arr[i];
        }
    }

    int minn = maxx;
    for(int i=1 ; i<= 26 ; i++)
    {
        if(arr[i]>=1 && arr[i]<minn)
        {
            minn = arr[i];
        }
    }

    int sum = maxx-minn;

    if(sum < 2)
    {
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    else  //从 2 开始
    {
        int count = IsPrime(sum);
        if(count == 1)
        {
            cout << "Lucky Word" << endl;
            cout << sum << endl;
        }
        else
        {
            cout << "Lucky Word" << endl;
            cout << sum << endl;
        }
    }
    
    return 0;
}