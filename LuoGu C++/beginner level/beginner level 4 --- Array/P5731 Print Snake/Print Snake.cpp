#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , arr[10][10]={0} , x=1 , y=1 , mark=1;
    cin >> n;
    arr[x][y] = mark;
    while(mark<n*n)
    {
        //一直往右走
        //往上走不了 , 就往右边走
        while(arr[x][y+1]==0 && y+1<=n)
        {
            y++;
            mark++;
            arr[x][y] = mark;
        }

        //一直往下走
        //往右走不了 , 就往下边走
        while(arr[x+1][y]==0 && x+1<=n)
        {
            x++;
            mark++;
            arr[x][y] = mark;
        }

        //一直往左走
        //往下走不了 , 就往左边走
        while(arr[x][y-1]==0 && y-1>=1)
        {
            y--;
            mark++;
            arr[x][y] = mark;
        }

        //一直往上走
        //往左走不了 , 就往上边走
        while(arr[x-1][y]==0 && x-1>=1)
        {
            x--;
            mark++;
            arr[x][y] = mark;
            
        }
    }

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}

 