#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// non negative array


/* naive

bool subarray_sum(int arr[], int n, int sum)
{
	for(int i=0;i<n;i++)
	{
		int total=0;
		for(int j=i;j<n;j++)
		{
			total=total+arr[j];
			if(sum==total)
				return true;
		}
	}
	return 0;
}

*/

int subarray_sum(int arr[], int n, int sum)
{
	int start=0,end=0;
	int total=arr[0];
	while(start!=n-1)
	{
		if(sum==total)
			return 1;
		else if(total<sum)
		{
			end++;
			total=total+arr[end];
		}
		else if(total>sum)
		{
			total=total-arr[start];
			start++;
		}
	}
	return 0;
}


int main()
{
	int arr[6]={1,4,20,3,10,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=233;
	cout<<subarray_sum(arr,n,sum);	
}