#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int aresame(int arr1[], int arr2[])
{
    for(int i=0;i<256;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

/*
naive

int main()
{
    string txt = "geeksforgeeks";
    string pat = "fpog";

    int n1=txt.length();
    int n2=pat.length();
    int arr2[256]={0};
    for(int i=0;i<n2;i++)
    {
        arr2[pat[i]]++;
    }
    for(int i=0;i<n1-n2;i++)
    {
        int arr1[256] = {0};
        for(int j=i;j<i+n2;j++)
        {
            arr1[txt[j]]++;
        }
        int c = aresame(arr1,arr2);
        if(c==1)
        {
            cout<<"its present";
            return 0;
        }
    }
    cout<<"not there";
}
*/

int main()
{
    string txt = "geeksforgeeks";
    string pat = "egek";

    int n1=txt.length();
    int n2=pat.length();
    int arr2[256]={0};
    for(int i=0;i<n2;i++)
    {
        arr2[pat[i]]++;
    }
    int arr1[256] = {0};
    for(int i=0;i<n2;i++)
    {
        arr1[txt[i]]++;
    }
    int c = aresame(arr1,arr2);
    if(c==1)
    {
        cout<<"its present";
        return 0;
    }
  
    for(int i=1;i<n1-n2;i++)
    {
        arr1[txt[i-1]]--;
        arr1[txt[n2+i-1]]++;
        int c = aresame(arr1,arr2);
        if(c==1)
        {
            cout<<"its present";
            return 0;
        }
    }
    cout<<"not there";

}

/*  we can even travrse from backside */
