#include<iostream>
#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int arr[8]={10,5,0,0,8,0,9,0};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    for(int f=0;f<n;f++)
    {
        cout<<arr[f]<<"\n";
    }
    
}
*/
int main()
{
    int arr[6]={10,8,0,0,12,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int f=0;f<n;f++)
    {
        cout<<arr[f]<<"\n";
    }
}