#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive + multiple peak

int peak_element(int arr[], int n)
{
	if(n==1)
		cout<<arr[0]<<"\t";
	if(arr[0]>arr[1])
		cout<<arr[0]<<"\t";
	if(arr[n-1]>arr[n-2])
		cout<<arr[n-1]<<"\t";
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
			cout<<arr[i]<<"\t";
	}
}

*/

int peak_element(int arr[], int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if((mid==0 || arr[mid-1]<arr[mid]) && (mid==n-1 || arr[mid]>arr[mid+1]))
		{
			cout<<arr[mid];
			break;
		}
		if(mid>0 && arr[mid-1]>arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}



int main()
{
	int arr[]={10,20,15,5,23,90,67};
	int n=7;
	peak_element(arr,n);
}