#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr,int n)
{
    
    int temp[n] = {};
    for(int p=0;p<n;p++)
    {
        int min=0;
        for(int q=0;q<n;q++)
        {
            if(arr[q]<arr[min])
            {
                min=q;
                
            }
        }
        temp[p] = arr[min];
        arr[min] = INFINITY;
    }


    for(int i=0;i<n;i++)
    {
        cout << temp[i] ;
    }
    cout << "\n";
}




int main()
{
    int arr[6] = {10,5,8,20,2,18};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);

}