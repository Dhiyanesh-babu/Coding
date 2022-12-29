#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void countingsort(int arr[],int n, int j)
{
    int count[10],output[n];
    for(int i=0;i<10;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/j)%10]++;
    }
    for(int i=1;i<10;i++)
    {
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/j)%10]-1] = arr[i];
        count[(arr[i]/j)%10]--;

    }
    for(int i=0;i<n;i++)
    {
        arr[i] = output[i];
    }
}

int radixsort(int arr[], int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int j=1;max/j>0;j=j*10)
    {
        countingsort(arr,n,j);
    }
    return 0;
}



int main()
{
    int arr[]={319,212,6,8,100,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] << "\n";
    }
    return 0;
}