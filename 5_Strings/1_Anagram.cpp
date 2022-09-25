#include<iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;


/* naive

int main()
{
    string s1 = "ggek", s2="egek";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;


}

*/
int main()
{
    string s1 = "ggek", s2="egek";
    int arr1[256] = {0};
    int arr2[256] = {0};
    for(int i=0;i<s1.length();i++)
    {
        arr1[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        arr2[s2[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}
