#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int *arr, int n)
{
    
    for(int i=0;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key )
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
    
    
    
    
    for(int i = 0;i<n;i++)
    {
        cout<< arr[i]<<"\n";
    }
    return 0;
}



int main()
{
    int arr[6] = {20,50,40,60,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);

 
}