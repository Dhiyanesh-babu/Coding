#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int f=0;f<n;f++)
    {
        cout<<arr[f]<<"\t";
    }
}