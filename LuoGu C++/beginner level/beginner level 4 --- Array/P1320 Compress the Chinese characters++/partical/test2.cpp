//部分实现(0)开头 
#include<bits/stdc++.h>
using namespace std;
string a;
string b;
int arr[201][201];
int arr2[201];
int arr3[201];
int main()
{
    cin >> a;
    int len = a.length();
    // cout << len << endl;
    for(int i=0;i<len-1;i++)
    {   
        cin >> b;
        a += b;
    }
    
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            arr[i][j] = int(a[i*len + j])-48;
        }
    }

    int x=0;
    int y=0;
    int k1=0;
    int k2=0;
    int count=0;

    // for(int i=0;i<len;i++)
    // {
    //     for(int j=0;j<len;j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }











    //对 0 的 捕获
    for(int i=0;i<len*len;i++)
    {
        if(y>len-1)
        {
            y=0;
            x++;
        }
        if(arr[x][y]==0)
        {
            count++;
            if(x == len-1 && y == len-1)
            {
                arr2[k1++] = count;
                break;
            }
            y++;
            
        }
        else
        {
            arr2[k1++] = count;
            count=0;
            y++;
        }
        
    }

    // for(int i=0;i<k1;i++)
    // {
    //     cout << arr2[i] << " ";
    // }
    // cout << endl;



    //对 1 的捕获
    x=0;
    y=0;
    count =0;
    for(int i=0;i<len*len;i++)
    {
        if(y>len-1)
        {
            y=0;
            x++;
        }
        if(arr[x][y]==1)
        {
            count++;
            if(x == len-1 && y == len-1)
            {
                arr3[k2++] = count;
                break;
            }
            y++;
            
        }
        else
        {
            arr3[k2++] = count;
            count=0;
            y++;
        }
        
    }

    // for(int i=0;i<k2;i++)
    // {
    //     cout << arr3[i] << " ";
    // }
    
    //对捕获的0进行规整
    int arr4[20] , arr5[20];
    int j1=0;
    for(int i=0,j=0;i<k1;i++)
    {
        if(arr2[i]!=0)
        {
            arr4[j1++] = arr2[i];
        }
        else
        {
            ;
        }
    }

    //对捕获的1进行规整
    int j2=0;
    for(int i=0;i<k2;i++)
    {
        if(arr3[i]!=0)
        {
            arr5[j2++] = arr3[i];
        }
        else
        {
            ;
        }
    }

    //0
    // for(int i=0;i<j1;i++)
    // {
    //     cout << arr4[i] << " ";
    // }
    // cout << endl;

    //1
    // for(int i=0;i<j2;i++)
    // {
    //     cout << arr5[i] << " ";
    // }
    // cout << endl;


    //将规整的数据进行融合
    int arr6[20];
    for(int i=0;i<j1;i++)
    {
        arr6[2*i] = arr4[i];
    }

    //将规整的数据进行融合
    int m=1;
    for(int i=0;i<j2;i++)
    {
        arr6[m] = arr5[i];
        m+=2;
    }
    
    
    cout << len << " ";
    for(int i=0;i<j1+j2;i++)
    {
        cout << arr6[i] << " ";
    }
    return 0;
}
