#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
    cin >> str;
    int length = str.length();
    for(int i=0 ; i<length ; i++)
    {
        int ret = (int)str[i];
        if(ret>=97 && ret<=122)
        {
            str[i]-=32;
        }
    }
    cout << str << endl;
    return 0;
}