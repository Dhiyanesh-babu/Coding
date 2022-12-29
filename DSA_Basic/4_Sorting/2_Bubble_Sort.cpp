#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


void bubble_sort(int *arr,int n)
{

    for(int p=0;p<n-1;p++)
    {
        bool swaped=false;
        for(int q=0;q<n-p-1;q++)
        {
            if(arr[q]>arr[q+1])
            {
                swap(arr[q],arr[q+1]);
                swaped=true;
            }
        }
        if(swaped==false)
        {
            break;
        }
    }


    for(int j=0;j<n;j++)
    {
        cout << arr[j];
    }
    cout << "\n";

}



int main()
{
    int arr[4]={2,10,8,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n);



    for(auto x:arr)
    {
        cout << x;
    }
}