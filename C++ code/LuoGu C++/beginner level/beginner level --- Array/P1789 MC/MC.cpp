#include<bits/stdc++.h>
using namespace std;
int arr[120][120] = {0};
int main()
{
    int n , m , k , x1 , y1 , x2 , y2;
    cin >> n >> m >> k;
    if(k!=0)
    {
        for(int i=0;i<m;i++)
        {
            cin >> x1 >> y1;
            x1+=2;
            y1+=2;
            //中
            arr[x1][y1] = 1;
            //左
            arr[x1][y1-1] = 1;
            arr[x1][y1-2] = 1;
            //右
            arr[x1][y1+1] = 1;
            arr[x1][y1+2] = 1;
            //上
            arr[x1-1][y1] = 1;
            arr[x1-2][y1] = 1;
            //下
            arr[x1+1][y1] = 1;
            arr[x1+2][y1] = 1;
            //左上
            arr[x1-1][y1-1] = 1;
            //右上
            arr[x1-1][y1+1] = 1;
            //左下
            arr[x1+1][y1-1] = 1;
            //右下
            arr[x1+1][y1+1] = 1;
        }
        for(int i=0;i<k;i++)
        {
            cin >> x2 >> y2;
            x2+=2;
            y2+=2;
            //中
            arr[x2][y2] = 1;
            //左
            arr[x2][y2-1] = 1;
            arr[x2][y2-2] = 1;
            //右
            arr[x2][y2+1] = 1;
            arr[x2][y2+2] = 1;
            //上
            arr[x2-1][y2] = 1;
            arr[x2-2][y2] = 1;
            //下
            arr[x2+1][y2] = 1;
            arr[x2+2][y2] = 1;
            //左上
            arr[x2-2][y2-2] = 1;
            arr[x2-2][y2-1] = 1;
            arr[x2-1][y2-2] = 1;
            arr[x2-1][y2-1] = 1;
            //右上
            arr[x2-2][y2+1] = 1;
            arr[x2-2][y2+2] = 1;
            arr[x2-1][y2+1] = 1;
            arr[x2-1][y2+2] = 1;
            //左下
            arr[x2+1][y2-2] = 1;
            arr[x2+1][y2-1] = 1;
            arr[x2+2][y2-2] = 1;
            arr[x2+2][y2-1] = 1;
            //右下
            arr[x2+1][y2+1] = 1;
            arr[x2+1][y2+2] = 1;
            arr[x2+2][y2+1] = 1;
            arr[x2+2][y2+2] = 1;
        }
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            cin >> x1 >> y1;
            x1+=2;
            y1+=2;
            //中
            arr[x1][y1] = 1;
            //左
            arr[x1][y1-1] = 1;
            arr[x1][y1-2] = 1;
            //右
            arr[x1][y1+1] = 1;
            arr[x1][y1+2] = 1;
            //上
            arr[x1-1][y1] = 1;
            arr[x1-2][y1] = 1;
            //下
            arr[x1+1][y1] = 1;
            arr[x1+2][y1] = 1;
            //左上
            arr[x1-1][y1-1] = 1;
            //右上
            arr[x1-1][y1+1] = 1;
            //左下
            arr[x1+1][y1-1] = 1;
            //右下
            arr[x1+1][y1+1] = 1;
        }
    }

    // for(int i=3;i<=n+2;i++)
    // {
    //     for(int j=3;j<=n+2;j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int count=0;
    for(int i=3;i<=n+2;i++)
    {
        for(int j=3;j<=n+2;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}