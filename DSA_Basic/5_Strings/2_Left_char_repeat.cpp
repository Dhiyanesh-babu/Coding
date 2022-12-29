#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

/* super naive

int repeat(string s)
{
    
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                cout << i;
                return 0;
            }
        }
    }
    return 0;

}

*/

/* naive
int repeat(string s)
{
    int arr[256]={0};
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]>1)
        {
            cout << i;
            return 0;
        }
    }
    return 0;

}

*/
/* front traverse 
int repeat(string s)
{
    int arr[256] ;
    fill(arr,arr+256,-1);
    int res = INT_MAX;
    for(int i=0;i<s.length();i++)
    {
        if(arr[s[i]]==-1)
        {
            arr[s[i]]=i;
        }
        else
        {
            res = min(res,arr[s[i]]);
        }
    }
    cout << res;
    return 0;
}
*/

int repeat(string s)
{
    int arr[256] ;
    fill(arr,arr+256,-1);
    int res = INT_MAX;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(arr[s[i]]==-1)
        {
            arr[s[i]]=i;
        }
        else
        {
            res = i;
        }
    }
    cout << res;
    return 0;
}


int main()
{
    string s = "gllksforeeks";
    repeat(s);
}