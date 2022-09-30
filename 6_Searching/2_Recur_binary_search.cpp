#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int bsearch(int arr[],int l,int h,int x)
{
    
    if(h>=l)
    {
        int mid=l+h/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            return bsearch(arr,l,mid-1,x);
        }
        else
        {
            return bsearch(arr,mid+1,h,x);
        }
    }
    return-1;
    
}


int main()
{

int arr[]={10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=80;
    int plki = bsearch(arr,0,n-1,x);
    cout<<plki;
    return 0;

}