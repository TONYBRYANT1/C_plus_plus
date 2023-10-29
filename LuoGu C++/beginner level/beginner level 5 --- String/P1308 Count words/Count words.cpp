#include<bits/stdc++.h>
using namespace std;
string str1;
string str2;
int main()
{
    getline(cin , str1);
    getline(cin , str2);

    for(int i=0 ; i<str1.length() ; i++)
    {
        str1[i] = char(tolower(str1[i]));
    }

    for(int i=0 ; i<str2.length() ; i++)
    {
        str2[i] = char(tolower(str2[i]));
    }

    str1 = ' ' + str1 + ' ';
    str2 = ' ' + str2 + ' ';

    if(str2.find(str1) == string::npos)
    {
        cout << -1 << endl;
    }
    else
    {
        //第一次出现的位置
        int ret1 = str2.find(str1);
        //出现过几次
        int ret2 = str2.find(str1);
        int count = 0;
        while(ret2 != string::npos)
        {
            count++;
            ret2 = str2.find(str1 , ret2+1);
        }
        cout << count << ' ' << ret1 << endl;
    }
    return 0;
}