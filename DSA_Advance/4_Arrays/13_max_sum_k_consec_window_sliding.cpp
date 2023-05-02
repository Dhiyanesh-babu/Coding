#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive

int max_sum_k(int arr[], int n, int k)
{
	int max_sum=INT_MIN;
	for(int i=0;i<n-k+1;i++)
	{
		int sum=0;
		for(int j=0;j<k;j++)
		{
			sum = sum+arr[i+j];
		}
		max_sum=max(sum,max_sum);
	}
	cout<<max_sum;

}

*/

int max_sum_k(int arr[], int n, int k)
{
	int max_sum=INT_MIN;
	int sum=0;
	for(int i=0;i<k;i++)
		sum=sum+arr[i];
	max_sum=sum;

	for(int i=k;i<n;i++)
	{
		sum=sum-arr[i-k];
		sum=sum+arr[i];
		max_sum=max(sum,max_sum);
	}
	cout<<max_sum; 
}




int main()
{
	int arr[6]={1,8,30,-5,20,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	max_sum_k(arr,n,k);

}