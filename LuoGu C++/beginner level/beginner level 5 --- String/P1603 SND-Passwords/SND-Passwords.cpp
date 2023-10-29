#include<bits/stdc++.h>
using namespace std;
int word[6] = {0};
void turn(string& s , int& i)
{
    int& c = i;
    if(s=="one"||s=="a"||s=="first"||s=="another"){word[i]=1;c++;}
    if(s=="two"||s=="both"||s=="second"){word[i]=4;c++;}
    if(s=="three"||s=="third"){word[i]=9;c++;}
    if(s=="four"){word[i]=16;c++;}
    if(s=="five"){word[i]=25;c++;}
    if(s=="six"){word[i]=36;c++;}
    if(s=="seven"){word[i]=49;c++;}
    if(s=="eight"){word[i]=64;c++;}
    if(s=="nine"){word[i]=81;c++;}
    if(s=="eleven"){word[i]=21;c++;}
    if(s=="twelve"){word[i]=44;c++;}
    if(s=="thirteen"){word[i]=69;c++;}
    if(s=="fourteen"){word[i]=96;c++;}
    if(s=="fifteen"){word[i]=25;c++;}
    if(s=="sixteen"){word[i]=56;c++;}
    if(s=="seventeen"){word[i]=89;c++;}
    if(s=="eightteen"){word[i]=24;c++;}
    if(s=="nineteen"){word[i]=61;c++;}
}
int main()
{
    string str;
    getline(cin , str);
    
    string arr[6];

    int i=1;

    int ret = str.find(' ');
    int ret1 = 0;
    arr[0].assign(str , 0 , ret);
    while(ret != string::npos)
    {
        ret1 = str.find(' ' , ret+1);
        arr[i].assign(str , ret+1 , ret1-ret-1);
        ret = ret1;
        if(str[ret+1] == '.')
        {
            break;
        }
        i++;
    }

    int c=0;
    for(int i=0 ; i<6 ; i++)
    {
        turn(arr[i] , c);
    }

    sort(word , word+c);

    long long sum=0;
    for(int i=0 ; i<c ; i++)
    {   
        sum+=word[i];
        sum*=100;
    }

    cout << sum/100 << endl;

    return 0;
}