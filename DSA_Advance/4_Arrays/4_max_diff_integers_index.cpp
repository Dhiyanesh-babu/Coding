#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/* efficient

// max value of arr[j]-arr[i] such that j>i

int max_diff(int arr[], int n)
{
	int res=arr[1]-arr[0];
	for(int i=0;i<n;i++)
	{
		for(int j=i+0;j<n;j++)
		{
			res=max(res,arr[j]-arr[i]);
		}
	}
	cout<<res;
}

*/ 

int max_diff(int arr[], int n)
{
	int res=arr[1]-arr[0];
	int least = arr[0];
	for(int i=1;i<n;i++)
	{
		res=max(res,arr[i]-least);
		least=min(least,arr[i]);
	}
	cout<<res;
}




int main()
{
	int arr[7]={2,3,10,6,4,8,1};
	int n=7;
	max_diff(arr,n);
}