#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/*

int max_sum(int arr[], int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		int sum=arr[i];
		for(int j=1;j<n;j++)
		{
			sum=sum+arr[(i+j)%n];
			res=max(sum,res);
		}
	}
	cout<<res;
}

*/



int kadence(int arr[], int n)
{
	int res=arr[0], maxEnding = arr[0];
	for(int i=0;i<n;i++)
	{
		maxEnding = max(arr[i], maxEnding+arr[i]);
		res=max(res,maxEnding);
	}
	return res;
}


int max_sum(int arr[], int n)
{
	int max_normal = kadence(arr,n);
	if(max_normal<0)
		return max_normal;
	int arr_sum = 0;
	for(int i=0;i<n;i++)
	{
		arr_sum = arr_sum + arr[i];
		arr[i] = -arr[i];
	}
	int max_circular = arr_sum + kadence(arr,n);
	cout<< max(max_normal, max_circular);
}






int main()
{
	int arr[6] = {3,-4,5,6,-8,7};
	int n=6;
	max_sum(arr,n);

}

