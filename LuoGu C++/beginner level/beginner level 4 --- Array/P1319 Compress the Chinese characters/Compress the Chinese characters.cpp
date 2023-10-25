#include<bits/stdc++.h>
using namespace std;
int arr[201][201];
int main()
{
    int n=0;
    cin >> n;
    int i=0;
    int x=1;
    int y=1;
    while(true)
    {
           
        //写0
        int num=0;
        cin >> num;
        
        for(int i=0;i<num;i++)
        {
            arr[x][y++] = 0;
            if(y>n)
            {
                if(x==n)
                {
                    break;
                }
                else
                {
                    x++;
                    y=1;
                }
               
            }
        }
        
    
        //写1
        num=0;
        cin >> num;
        
        for(int i=0;i<num;i++)
        {
            arr[x][y++] = 1;
            if(y>n)
            {
                if(x==n)
                {
                    break;
                }
                else
                {
                    x++;
                    y=1;
                }
            }
        }
        if(x==n && y==n+1)
        {
            break;
        }


    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout << arr[i][j] ;
        }
        cout << endl;
    }
}