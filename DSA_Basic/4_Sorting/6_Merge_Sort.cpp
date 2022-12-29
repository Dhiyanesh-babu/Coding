#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void merge(int arr[], int l, int m, int r )
{
    int n1 = m-l+1;
    int n2 = r-m;
    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++)
    {
        arr1[i] = arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j] = arr[m+j+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while( i<n1 and j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++]=arr1[i++];
        }
        else
        {
            arr[k++]=arr2[j++];
        }
        while(i<n1)
        {
            arr[k++]=arr1[i++];
        }
        while(j<n2)
        {
            arr[k++]=arr2[j++];
        }

    }


}

void mergesort(int arr[], int l, int r)
{
    
    if(r>l)
    {
    int m = l + (r-l)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}

int main()
{
    int arr[8] = {30,10,8,3,2,16,50,1};
    int l= 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int r = n-1;
   

    mergesort(arr,l,r);

    for(int a=0;a<n;a++)
    {
        cout<< arr[a]<< "\n";
    }
    return 0;

}