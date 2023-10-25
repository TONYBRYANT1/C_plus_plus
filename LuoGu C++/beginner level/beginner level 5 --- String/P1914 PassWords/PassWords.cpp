#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin >> n;
    cin >> str;
    
    int length = str.length();
    int m = n%26;
    for(int i=0 ; i<length ; i++)
    {
        int ret = int(str[i]);
        if(ret+m <= 122)
        {
            str[i] += m;
        }
        else
        {
            int m2 = m - (122 - ret);
            str[i] = char(m2+96);
        }
    }
    cout << str << endl;
    return 0;
}