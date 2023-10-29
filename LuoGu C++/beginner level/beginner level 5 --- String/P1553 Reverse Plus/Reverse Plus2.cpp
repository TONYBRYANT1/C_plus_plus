#include<bits/stdc++.h>
using namespace std;

//2313320000
void reverse1(string& arr)
{
    int pos_arr=0;
    reverse(arr.begin() , arr.end()); // 0000233132     10      4
    for(int i=0 ; i<arr.length() ; i++)
    {
        if(arr[i] != '0')
        {
            pos_arr = i;
            break;
        }
    }
    string arr1;
    arr1.assign(arr , pos_arr , arr.length() - pos_arr);
    arr = arr1;
}
//0012323100
void reverse2(string& arr)  //0013232100      8      5    
{
    int arr_first_pos = 0;
    int arr_last_pos = 0;
    reverse(arr.begin() , arr.end());
    for(int i=arr.length()-1 ; i>=0 ; i--)
    {
        if(arr[i] != '0')
        {
            arr_last_pos = i;
            break;
        }
    }
    for(int i=0 ; i<arr.length() ; i++)
    {
        if(arr[i] != '0')
        {
            arr_first_pos = i;
            break;
        }
    }
    string arr1;
    arr1.assign(arr , arr_first_pos , arr_last_pos - arr_first_pos + 1);
    arr = arr1;
}

int main()
{
    string arr;
    getline(cin , arr);
    int pos=0;
    int kind=1;
    for(int i=0 ; i<arr.length() ; i++)
    {
        if(arr[i] == '.')
        {
            pos = i;
            kind = 2;
            break;
        }
        else if(arr[i] == '/')
        {
            pos = i;
            kind = 3;
            break;
        }
        else if(arr[i] == '%')
        {
            pos = i;
            kind = 4;
            break;
        }
    }

    if(kind == 1)
    {
        reverse1(arr);
        cout << arr << endl;
    }
    else if(kind == 2)
    {
        string arr1,arr2;
        arr1.assign(arr , 0 , pos);
        arr2.assign(arr , pos+1 , arr.length()-1-pos);
        reverse1(arr1);
        reverse2(arr2);
        cout << arr1 << '.' << arr2 << endl;
    }
    else if(kind == 3)
    {
        string arr1,arr2;
        arr1.assign(arr , 0 , pos);
        arr2.assign(arr , pos+1 , arr.length()-1-pos); 
        reverse1(arr1);
        reverse2(arr2);
        cout << arr1 << '/' << arr2 << endl;
    }
    else
    {
        string arr1;
        arr1.assign(arr , 0 , arr.length()-1);
        reverse1(arr1);
        cout << arr1 << '%' << endl;
    }
    
    return 0;
}