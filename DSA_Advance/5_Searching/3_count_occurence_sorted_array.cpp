#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_occurence(int arr[], int x, int low, int high)
{
	while(low<high)
	{
	int mid=low+(high-low)/2;
	if(arr[mid]==x && arr[mid-1]!=x)
	{
		return mid;
		break;
	}
	else if(arr[mid]>x || (arr[mid]==x && arr[mid-1]==x))
	{
		high=mid-1;
	}
	else if(arr[mid]<x)
	{
		low=mid+1;
	}

	}
}


int last_occurence(int arr[], int x, int low, int high)
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


int count_occurence(int arr[],int x, int low, int high)
{
	int first=first_occurence(arr,x,low,high);
	if(first==-1)
		return 0;
	else
		return (last_occurence(arr,x,low,high)-first+1);

}



int main()
{
	int arr[7]={10,20,20,20,30,30,40};
	int x=40;
	int n=7;
	cout<<count_occurence(arr,x,0,n-1);
}