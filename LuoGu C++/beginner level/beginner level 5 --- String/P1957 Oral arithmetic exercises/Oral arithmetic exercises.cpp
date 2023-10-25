#include<bits/stdc++.h>
using namespace std;
char catcher[10];
char a;
int n=0;
char c_b[10];
char c_c[10];
char c_d[10];
char s[20];
int b=0;
int c=0;
int d=0;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> catcher;
        if(catcher[0]>='a' && catcher[0]<='c')
        {
            a = catcher[0];
            cin >> b >> c;
        }
        else
        {
            //将 char[] 转化为 int 类型:
            b = atoi(catcher);//sscanf(catcher , "%d" , &b);
            cin >> c;
        }
        memset(s , 0 , sizeof(s));
        if(a == 'a')
        {
            sprintf(s , "%d+%d=%d" , b , c , b+c);
        }
        else if(a == 'b')
        {
            sprintf(s , "%d-%d=%d" , b , c , b-c);
        }
        else
        {
            sprintf(s , "%d*%d=%d" , b , c , b*c);
        }
        cout << s << endl << strlen(s) << endl;
    }
    return 0;
}