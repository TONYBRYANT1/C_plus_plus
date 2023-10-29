#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "I Love You";
    int pos = str.find('e');
    str = str.substr(pos+2);
     cout << str << endl;

    str = "I Love You";
    str = str.substr(2 , 4);
    cout << str << endl;
    return 0;
}