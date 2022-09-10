#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
   
    while(low<high)
    {
        //swap(arr[low],arr[high]);
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    
    }
    for(int f=0;f<n;f++)
    {
        cout<<arr[f]<<"\t";
    }
    cout<<"\n";
    
    
    
}