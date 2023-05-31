#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int binary_search(int arr[],int l,int h,int x)
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
            return binary_search(arr,l,mid-1,x);
        }
        else
        {
            return binary_search(arr,mid+1,h,x);
        }
    }
    return-1;
    
}


int search_array(int arr[], int n, int x)
{
	if(arr[0]==x)
		return 0;
	int i=1;
	while(arr[i]<x)
	{
		i=i*2;
	}
	if(arr[i]==x)
		return i;
	return binary_search(arr,i/2,i,x);
}




int main()
{
	int arr[13]={1,10,15,20,40,80,90,100,120,150,160,171,180};
	int n=13,x=100;
	cout<<search_array(arr,n,x);

}