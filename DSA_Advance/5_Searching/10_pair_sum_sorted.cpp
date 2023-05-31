#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_set>
using namespace std;

bool search(int arr[], int x, int n)
{
	int low=0,high=n-1;
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
	return 0;
}


int main()
{
	int arr[]={2,3,5,8,9,10,11};
	int x=50,n=7;
	cout<<search(arr,x,n);
}