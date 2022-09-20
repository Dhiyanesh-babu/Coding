#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],int n,int i)
{
    int l=(i*2)+1, r=(i*2)+2;
    int big = i;
    if(l<n && arr[l]>arr[big])
    {
        big=l;
    }
    if(r<n && arr[r]>arr[big])
    {
        big=r;
    }
    if(big != i)
    {
        swap(arr[i],arr[big]);
        heapify(arr,n,big);
    }
    
}


void buildheap(int arr[],int n)
{
    for (int k=(n-2)/2;k>=0;k--)
    {
        heapify(arr,n,k);
    }
}

void heapsort(int arr[],int n)
{
    buildheap(arr,n);
    for(int j=n-1;j>=1;j--)
    {
        swap(arr[0],arr[j]);
        heapify(arr,j,0);
    }
}

int main()
{
    int arr[]={10,15,50,4,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;

}

