#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//consecutive max sum subarray


/* naive

int max_sum(int arr[], int n)
{
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			curr=curr+arr[j];
			res=max(res,curr);
		}

	}
	cout<<res;
}

*/


int max_sum(int arr[], int n)
{
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		res=max(arr[i],arr[i]+res);
	}
	cout<<res;

}


int main()
{
	int arr[7] = {2,3,-8,7,-1,2,3};
	int n=7;
	max_sum(arr,n);
}