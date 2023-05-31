#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


bool pair_sum(int arr[], int low, int high ,int x)
{
	int sum=arr[low]+arr[high];
	while(low<=high)
	{
		if(sum==x)
			return true;
		if(sum>x)
		{
			sum=sum-arr[high]+arr[high-1];
			high--;
		}
		else
		{
			sum=sum-arr[low]+arr[low+1];
			low++;
		}
	}
	return false;
}


bool triplet_sum(int arr[], int x, int n)
{
	for(int i=0; i<n; i++)
	{
		if(pair_sum(arr,i+1,n-1,x-arr[i]))
		{
			return true;
		}
	}
	return false;
}











int main()
{
	int arr[]={2,3,4,8,9,21,40};
	int x=302;
	int n=7;
	cout<<triplet_sum(arr,x,n);
}