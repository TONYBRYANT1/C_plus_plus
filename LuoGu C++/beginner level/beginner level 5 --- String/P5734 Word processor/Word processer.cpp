//#define debug
#ifdef debug
#define dbg(a) cout<<#a<<'='<<a<<endl;
#else
#define dbg(a)
#endif
#include<bits/stdc++.h>
using namespace std;
#define getchar() 
#define getline(a,b) cin>>b;
string arr1(100 , '\0');
string arr2(100 , '\0');
string arr3(100 , '\0');
char arr4[100];
int m=0;
int main()
{
    int n=0;
    cin >> n;
    getchar();
    getline(cin , arr1);
    
    for(int i=0;i<n;i++)
    {
        cin >> m;
        if(m==1)
        {
            getchar();
            getline(cin , arr2);
            
            arr1+=arr2;
            cout << arr1 << endl;
        }
        else if(m==2)
        {
            memset(arr4 , '\0' , sizeof(arr4));
            int a , b;
            cin >> a >> b;

            for(int i=a , j=0 ; i<a+b ;i++,j++)
            {
                arr4[j] = arr1[i];
            }


            arr1 = arr4;
            cout << arr1 << endl;
        }
        else if(m==3)

        {
            int c=0;
            cin >> c;//3
            getchar();
            getline(cin , arr2);
            
            int ret = arr1.length() + arr2.length();
            int ret1 =arr1.length();
            int ret2 = arr2.length();//6
            // for(int i=0,j=0,k=0;i<ret,j<ret1,k<ret2;i++,j++,k++)
            // {
            //     if(i>=c && i<=c+ret2-1)
            //     {
            //         arr3[i] = arr2[k];
            //         j--;
            //     }
            //     else
            //     {
            //         arr3[i] = arr1[j];
            //         k--;
            //     }
            // }
            int p1=0,p2=0;
            for(int i=0;i<ret;i++)
            {
                if(i>=c&&i<=c+ret2-1)
                {
                    arr3[i]=arr2[p2++];
                }else
                {
                    arr3[i]=arr1[p1++];
                }
            }
            arr1 = arr3;
            cout << arr1 << endl;
        }
        else // m==4
        {
            int h=0;
            getchar();
            getline(cin , arr2);
            
            int ret = arr1.length();
            int pos = arr1.find(arr2 , 0);
            if(pos>=0)
            {
                cout << pos << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}