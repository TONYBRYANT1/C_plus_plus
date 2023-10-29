#include<bits/stdc++.h>
using namespace std;
int main()
{
    string star;
    string team;
    int star1[6];
    int team1[6];
    getline(cin , star);
    getline(cin , team);

    int s=0;
    int t=0;

    for(s ; s<star.length() ; s++)
    {
        star1[s] = int(star[s]-'A'+1);
    }   
    for(t ; t<team.length() ; t++)
    {
        team1[t] = int(team[t]-'A'+1);
    }   

    // for(int i=0 ; i<s ; i++)
    // {
    //     cout << star1[i] << " " ;
    // }
    // cout << endl;
    // for(int i=0 ; i<t ; i++)
    // {
    //     cout << team1[i] << " " ;
    // }
    // cout << endl;

    long long count1=1;
    long long count2=1;
    for(int i=0 ; i<s ; i++)
    {
        count1*=star1[i];
    }

    for(int i=0 ; i<t ; i++)
    {
        count2*=team1[i];
    }
    
    if(count1%47 == count2%47)
    {
        cout << "GO" << endl;
    }
    else
    {
        cout << "STAY" << endl;
    }

    return 0;
}