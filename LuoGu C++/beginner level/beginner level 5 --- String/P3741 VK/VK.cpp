#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin >> n;
    string str;
    int count=0;
    // getchar();
    cin.ignore(1024 , '\n');
    getline(cin , str);
    // cin >> str;
    for(int i=0 ; i<n ; i++)
    {
        if(str[i] == 'V' && str[i+1] == 'K')
        {
            count++;
            str[i] = str[i+1] = 'X';
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(str[i] == str[i+1] && str[i] != 'X')
        {
            count++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}