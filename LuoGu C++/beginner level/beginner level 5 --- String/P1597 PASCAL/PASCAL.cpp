#include<bits/stdc++.h>
using namespace std;
int arr[3]={0};
int main()
{
    string str;
    cin >> str;
    int m=0;
    for(int i=0 ; i<str.length()-1 ; i++)
    {
        if(str[i] == '=')
        {
            if(str[i+1]>='0' && str[i+1]<='9')
            {
                arr[int(str[i-2])-'a'] = int(str[i+1]-'0');
            }
            else
            {
                arr[int(str[i-2])-'a'] = arr[int(str[i+1]-'a')];
            }
        }
    }
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}
