#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr1 = "Luogu";
    string arr2 = "guGugu";
    string arr3;
    int c=3;
    int ret = arr1.length() + arr2.length();
    int ret1 =arr1.length();
    int ret2 = arr2.length();//6
    for(int i=0,j=0,k=0;i<ret,j<ret1,k<ret2;i++,j++,k++)
    {
        if(i>=c && i<=c+ret2-1)
        {
            arr3[i] = arr2[k];
            j--;
        }
        else
        {
            arr3[i] = arr1[j];
            k--;
        }
    }
    arr1 = arr3;
    cout << arr1 << endl;
}