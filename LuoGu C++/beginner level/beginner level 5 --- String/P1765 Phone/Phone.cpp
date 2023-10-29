#include<bits/stdc++.h>
using namespace std;
string arr;
int main()
{
    string str[13] = {
       "" , "" , "abc" , "def" , 
         "ghi" , "jkl" , "mno" ,
        "pqrs" , "tuv" , "wxyz",
           "*" ,  " "  , "#"
    };
    getline(cin , arr);
    int int_arr[200];
    int count = 0;
    for(int i=0 ; i<arr.length() ; i++)
    {
        for(int j=2 ; j<13 ; j++)
        {
            count = 0;
            for(int k=0 ; k<str[j].length() ; k++)
            {
                count++;
                if(str[j][k] == arr[i])
                {
                    int_arr[i] = count;
                }
            }
        }
    }

    // for(int i=0 ; i<arr.length() ; i++)
    // {
    //     cout << int_arr[i] << " ";
    // }
    // cout << endl;

    int sum=0;
    for(int i=0 ; i<arr.length() ; i++)
    {
        sum+=int_arr[i];
    }
    cout << sum << endl;
    return 0;
}