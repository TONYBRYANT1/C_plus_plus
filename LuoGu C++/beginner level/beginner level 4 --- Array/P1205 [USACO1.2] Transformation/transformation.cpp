#include<bits/stdc++.h>
using namespace std;
char arr0[8]={0};       //结果存储
char arr[21][21];       //数据存储
char arr33[8][21][21];  //总数据库
//1.图案按顺时针转 90°
char arr1[21][21];
//2.图案按顺时针旋转 180°
char arr2[21][21];
//3.图案按顺时针旋转 270°
char arr3[21][21];
//4.反射：图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）。
char arr4[21][21];
//5.组合：图案在水平方向翻转，然后再按照 1∼3 之间的一种再次转换。
char arr50[21][21];
char arr51[21][21];
char arr52[21][21];
char arr53[21][21];
//6.不改变：原图案不改变。
char arr6[21][21];
//7.无效转换：无法用以上方法得到新图案。
char arr7[21][21];

char a='0';
int main()
{
    //数据的读取
    int n=0;
    cin >> n;

    int x=1;
    int y=1;
    while(cin >> a)
    {
        if(y>n)
        {
            x++;
            y=1;
        }
        arr[x][y++] = a;
    }
    
    //打印结果:
    // cout << "arr" << endl;
    // cout << endl;
    // for(int i=1;i<=2*n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //1.图案按顺时针转 90°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr1[i2][j2] = arr[i1][j1];
            arr33[1][i2][j2] = arr1[i2][j2];
        }
    }
    //打印结果:
    // cout << "arr1" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //2.图案按顺时针旋转 180°
    //在 1 的基础上再次顺时针旋转 90°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr2[i2][j2] = arr1[i1][j1];
            arr33[2][i2][j2] = arr2[i2][j2];
        }
    }
    //打印结果:
    // cout << "arr2" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //3.图案按顺时针旋转 270°
    //在 2 的基础上再次顺时针旋转 90°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr3[i2][j2] = arr2[i1][j1];
            arr33[3][i2][j2] = arr3[i2][j2];
        }
    }
    //打印结果:
    // cout << "arr3" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr3[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //4.反射：图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）。
    for(int i=1 ; i<=n ; i++)
    {
        for(int j1=1,j2=n ; j1<=n,j2>=1 ; j1++,j2--)
        {
            arr4[i][j2] = arr[i][j1];
            arr33[4][i][j2] = arr4[i][j2];
        }
    }
    //打印结果:
    // cout << "arr4" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr4[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //5.组合：图案在水平方向翻转，然后再按照 1∼3 之间的一种再次转换。
    //5.0 仅水平翻转(属于4->5的一个过渡 , 其实可以直接用4)
    for(int i=1 ; i<=n ; i++)
    {
        for(int j1=1,j2=n ; j1<=n,j2>=1 ; j1++,j2--)
        {
            arr50[i][j2] = arr[i][j1];
            arr33[5][i][j2] = arr50[i][j2];
        }
    }
    //打印结果:
    // cout << "arr50" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr50[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //5.1 水平翻转 + 按顺时针转 90°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr51[i2][j2] = arr50[i1][j1];
            arr33[5][i2][j2] = arr51[i2][j2];
        }
    }
    //打印结果:
    // cout << "arr51" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr51[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //5.2 水平翻转 + 按顺时针转 180°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr52[i2][j2] = arr51[i1][j1];
            arr33[6][i2][j2] = arr52[i2][j2];
        }
    }
    //打印结果:
    // cout << "arr52" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr52[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //5.3 水平翻转 + 按顺时针转 270°
    for(int j1=n,i2=n ; j1>=1,i2>=1 ; j1--,i2--)
    {
        for(int i1=n,j2=1;i1>=1,j2<=n;i1--,j2++)
        {
            arr53[i2][j2] = arr52[i1][j1];
            arr33[7][i2][j2] = arr53[i2][j2];

        }
    }
    //打印结果:
    // cout << "arr53" << endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout << arr53[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    //打印总数组arr33[i][j][k]
    // for(int i=1;i<=7;i++)
    // {
    //     cout << i << ":" << endl;
    //     for(int j=1;j<=n;j++)
    //     {
    //         for(int k=1;k<=n;k++)
    //         {
    //             cout << arr33[i][j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }
    
    //数据比对
    int k=1;            //计数器 : 搭配 while() 进行轮轮比对
    int sign=0;         //生死标记 : 如果在while()内可以打印结果 , while()后面的东西全都不要
    while(k<=7)
    {
        int count=0;    //看是内容否全都一致

        //轮轮比对
        for(int i1=1,i2=n+1;i1<=n,i2<=2*n;i1++,i2++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr33[k][i1][j] == arr[i2][j])
                {
                    count++;
                }
            }
        }

        //因为 方法5 有三种可能得缘故 进行逐一考虑
        if(count==n*n)
        {
            if(k>=1 && k<=4)
            {
                cout << k << endl;

                sign=1;     //生死标记

                break;
            }
            else if(k>=5 && k<=7)
            {
                cout << 5 << endl;

                sign=1;     //生死标记

                break;
            }
        }

        k++;      //计数器
    }
    
    if(sign==0)   //生死标记
    {
        //第6种方案
        int sum=0;
        for(int i1=1,i2=n+1 ; i1<=n,i2<=2*n ; i1++,i2++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i1][j]==arr[i2][j])
                {
                    sum++;
                }
            }
        }
        if(sum==n*n)
        {
            cout << 6 << endl;
        }
        else
        {
            //第7种方案 之 实在没辙
            cout << 7 << endl;
        }
    }
    
    return 0;
}