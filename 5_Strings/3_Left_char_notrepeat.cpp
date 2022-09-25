#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* super naive

int notrepeat(string s)
{
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        bool check = false;
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                check = true;
            }
            
        }
        if(check==false)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}

*/

/* naive

int notrepeat(string s)
{
    int arr[256]={0};
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]==1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;

}


*/

int notrepeat(string s)
{
    int arr[256];
    int res = INT_MAX;
    fill(arr,arr+256,-1);
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]==-1)
        {
            arr[s[i]]=i;
        }
        else
        {
            arr[s[i]]=-2;
        }
    }
    for(int j=0;j<s.length();j++)
    {
        if(arr[s[j]]>0)
        {
            res = min(res,arr[s[j]]);
        }
    }
    cout << res ;
    return 0;
}

int main()
{
    string s="geelksforgeeks";
    notrepeat(s);
    return 0;
}