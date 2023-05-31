#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int search(int arr[], int x,int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>arr[low])
		{
			if(x>=arr[low] && x<arr[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		else
		{
			if(x>arr[mid] && x<=arr[high])
				low=mid+1;
			else
				high=mid-1;
		}

	}
}



int main()
{
	int arr[]={10,20,30,40,50,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=30;
	cout<<search(arr,x,n);
}