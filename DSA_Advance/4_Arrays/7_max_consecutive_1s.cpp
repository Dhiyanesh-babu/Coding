#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int count_ones(int arr[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	{
		int curr=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==1)
				curr++;
			else
				break;
		}
		res=max(res,curr);
	}
	cout<<res;
}



/*

int count_ones(int arr[], int n)
{
	int count=0;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			temp++;
		else if(arr[i]==0)
		{
			if(temp>count)
				count=temp;
			temp=0;

		}
	}
	cout<<count;

}

*/


int main()
{
	int arr[9] = {1,0,1,1,1,1,0,1,1};
	int n= sizeof(arr)/sizeof(arr[0]);
	count_ones(arr,n);
}