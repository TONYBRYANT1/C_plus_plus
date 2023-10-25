#include<bits/stdc++.h>
using namespace std;
int arr[21][21]={0};
int main()
{
    int n=0;
    cin >> n;
    arr[1][1]=1;
    arr[2][1] = 1;
    arr[2][2] = 1;

    if(n==1)
    {
        cout << "1" << endl;
    }
    else if(n==2)
    {
        cout << "1" << endl;
        cout << "1 1" << endl;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            arr[i][1] = 1;
            for(int j=2;j<=i;j++)
            {
                if(arr[i-1][j]==0)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}