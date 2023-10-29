#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string arr1(100 , '\0');
    string arr2(100 , '\0');
    string arr3(100 , '\0');
    string arr4(100 , '\0');
    string arr5(100 , '\0');
    cin >> str;
    int pos=0;
    int kind=1;
    for(int i=0 ; i<str.length() ; i++)
    {
        if(str[i] == '.')
        {
            pos = i;
            kind = 2;
        }
        if(str[i] == '/')
        {
            pos = i;
            kind = 3;
        }
        if(str[i] == '%')
        {
            pos = i;
            kind = 4;
        }
    }

    if(kind==1)
    {
        arr1 = str;
        reverse(arr1.begin() , arr1.end());
        int arr1_pos=0;
        for(int i=0 ; i<arr1.length() ; i++)
        {
            if(arr1[i] != '0')
            {
                arr1_pos = i;
                break;
            }
        }
        if(arr1_pos > arr1.length()-1)
        {
            cout << arr1 << endl;
        }
        else
        {
            arr2.assign(arr1 , arr1_pos , arr1.length()-arr1_pos);
            cout << arr2 << endl;
        }
    }
    else if(kind == 2)
    {
        arr1.assign(str , 0 , pos);
        reverse(arr1.begin() , arr1.end());
        arr2.assign(str , pos+1 , str.length()-pos-1);

        arr3 = arr2;
        reverse(arr3.begin() , arr3.end());
        int arr1_pos =-1;
        int arr3_pos = -1;
        for(int i=0;i<arr1.length() ; i++)
        {
            if(arr1[i] != '0')
            {
                arr1_pos = i;
                break;
            }
        }
        arr4.assign(arr1 , arr1_pos , arr1.length()-arr1_pos);
        cout << arr4;
        cout << '.';
        for(int i=arr3.length()-1 ; i>=0 ; i--)
        {
            if(arr3[i] != '0')
            {
                arr3_pos = i;
                break;
            }
        }
        if(arr3_pos<0)
        {
            cout << 0;
        }
        else
        {
            arr5.assign(arr3 , 0 , arr3_pos+1);
        cout << arr5;
        }

    }
    else if(kind == 3)
    {
        arr1.assign(str , 0 , pos);
        reverse(arr1.begin() , arr1.end());
        arr2.assign(str , pos+1 , str.length()-pos-1);

        arr3 = arr2;
        reverse(arr3.begin() , arr3.end());
        int arr1_pos =-1;
        int arr3_pos = -1;
        for(int i=0;i<arr1.length() ; i++)
        {
            if(arr1[i] != '0')
            {
                arr1_pos = i;
                break;
            }
        }
        arr4.assign(arr1 , arr1_pos , arr1.length()-arr1_pos);
        cout << arr4;
        cout << '/';
        for(int i=arr3.length()-1 ; i>=0 ; i--)
        {
            if(arr3[i] != '0')
            {
                arr3_pos = i;
                break;
            }
        }
        if(arr3_pos<0)
        {
            cout << 0;
        }
        else
        {
            arr5.assign(arr3 , 0 , arr3_pos+1);
        cout << arr5;
        }
        
    }
    else if(kind == 4)
    {
        int arr1_pos = 0;
        arr1.assign(str , 0 , str.length()-1);
        reverse(arr1.begin() , arr1.end());
        for(int i=0 ; i<arr1.length() ; i++)
        {
            if(arr1[i] != '0')
            {
                arr1_pos = i;
                break;
            }
        }
        if(arr1_pos > arr1.length()-1)
        {
            cout << arr1 << '%' << endl;
        }
        else
        {
            arr2.assign(arr1 , arr1_pos , arr1.length()-arr1_pos);
            cout << arr2 << '%' << endl;
        }

    }
    return 0;
}