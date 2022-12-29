#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int bsearch(int arr[],int n,int x)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            h=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    return -1;
}



int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int pos = bsearch(arr,n,x);
    cout<<pos;
    return 0;
}