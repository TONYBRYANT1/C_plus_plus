//getline() 有一定问题
#include<bits/stdc++.h>
using namespace std;
string arr1;
string arr2;
string arr3;
int main()
{
    int n=0;
    cin >> n;
    // getchar();
    // getline(cin , arr1);
    cin >> arr1;
    for(int i=0;i<n;i++)
    {
        int m=0;
        cin >> m;
        if(m==1)
        {
            // getchar();
            // getline(cin , arr2);
            cin >> arr2;
            arr1 += arr2;
            cout << arr1 << endl;
        }
        else if(m==2)
        {
            int a=0 , b=0;
            cin >> a >> b;
            arr1.assign(arr1 , a , b);
            cout << arr1 << endl;
        }
        else if(m==3)
        {
            int a=0;
            cin >> a;
            // getchar();
            // getline(cin , arr2);
            cin >> arr2;
            arr3.assign(arr1 , 0 , a);
            // cout << arr3 << endl;
            arr3.append(arr2 , 0 , arr2.length());
            // cout << arr3 << endl;
            arr3.append(arr1 , a , arr1.length()-a);
            // cout << arr3 << endl;
            arr1 = arr3;
            cout << arr1 << endl;
        }
        else 
        {
            // getchar();
            // getline(cin , arr2);
            cin >> arr2;
            if(arr1.find(arr2) != string::npos)
            {
                cout << arr1.find(arr2) << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}