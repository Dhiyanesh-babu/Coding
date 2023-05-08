#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/* resursive

int first_occurence(int arr[], int x, int low, int high)
{
	int mid=low+(high-low)/2;
	if(low>high)
		return -1;
	if(arr[mid]==x && arr[mid+1]!=x)
	{
		return mid;
	}
	if(arr[mid]>x)
	{
		return first_occurence(arr,x,low,mid-1);
	}
	if(arr[mid]<x || (arr[mid]==x && arr[mid+1]==x))
	{
		return first_occurence(arr,x,mid+1,high);
	}
}

*/

int first_occurence(int arr[], int x, int low, int high)
{
	while(low<high)
	{
	int mid=low+(high-low)/2;
	if(arr[mid]==x && arr[mid+1]!=x)
	{
		return mid;
		break;
	}
	else if(arr[mid]>x )
	{
		high=mid-1;
	}
	else if(arr[mid]<x || (arr[mid]==x && arr[mid+1]==x))
	{
		low=mid+1;
	}

	}
}

int main()
{
	int arr[8]={1,10,10,10,10,20,20,40};
	int x=10;
	int n=8, low=0, high=n-1;
	cout<<first_occurence(arr,x,low,high);
}