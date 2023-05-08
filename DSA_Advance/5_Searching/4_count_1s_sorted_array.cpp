#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/*
naive

int count_one(int arr[], int n)
{
	// n-(first_occurence(1))
}


*/

int count_one(int arr[], int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{

	int mid=(high+low)/2;
	if(mid==0 || (arr[mid]==1 && arr[mid-1]!=1))
	{
		return n-mid;
		
	}
	else if(arr[mid]==1 && arr[mid-1]==1)
	{
		high=mid-1;
	}
	else if(arr[mid]<1)
	{
		low=mid+1;
	}
	}

}


int main()
{
	int arr[]={0,0,0,0,0,1,1,1,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<count_one(arr,n);
}