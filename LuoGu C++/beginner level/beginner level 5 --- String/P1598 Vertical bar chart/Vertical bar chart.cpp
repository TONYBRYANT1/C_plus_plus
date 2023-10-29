#include<bits/stdc++.h>
using namespace std;
int arr[26] = {0};
int main()
{
    char a;
    while(scanf("%c" , &a) != EOF)
    {
        if(a>='A' && a<='Z')
        {
            arr[a-'A']++;
        }
    }
    // for(int i=0 ; i<25 ; i++)
    // {
    //     cout << arr[i] << " " ;
    // }

    int maxx=0;
    for(int i=0 ; i<25 ; i++)
    {
        if(arr[i]>maxx)
        {
            maxx = arr[i];
        }
    }

    int std = maxx;
    char arr2[maxx+1][51];
    for(int i=0 ; i<=maxx-1 ;i++)
    {
        for(int j=0,n=0 ; j<51 ; j+=2 , n++)
        {
            if(arr[n]>=std)
            {
                arr2[i][j] = '*';
            }
            else
            {
                arr2[i][j] = ' ';
            }
        }
        for(int j=1 ; j<51 ; j+=2)
        {
            arr2[i][j] = ' ';
        }
        std--;
    }

    int m=0;
    for(int j=0 ; j<51 ; j+=2 , m++)
    {
        arr2[maxx][j] = char(65+m);
    }
    for(int j=1 ; j<51 ; j+=2)
    {
        arr2[maxx][j] = ' ';
    }

    for(int i=0 ; i<maxx+1 ;i++)
    {
        for(int j=0 ; j<51 ; j++)
        {
            cout << arr2[i][j];
        }
        cout << endl;
    }

    
    
    return 0;
}