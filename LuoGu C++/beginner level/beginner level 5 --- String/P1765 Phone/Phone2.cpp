#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    int count=0;
    int arr[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    getline(cin , str);
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            int s = str[i] - 'a';
            count += arr[s];
        }
        else if(str[i] == ' ') 
        {
            count++;
        }
    }    
    cout << count << endl;
    return 0;
}