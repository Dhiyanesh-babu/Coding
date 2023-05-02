#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/* naive

int remove_duplicate(int arr[], int n)
{
	int temp[n];
	temp[0]=arr[0];
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(temp[res-1]!=arr[i])
		{
			temp[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++)
	{
		arr[i]=temp[i];
		cout<<arr[i]<<"\t";
	}
}
*/

int remove_duplicate(int arr[], int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[res-1])
		{
			arr[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++)
	{
		cout<<arr[i]<<"\t";
	}

}


int main()
{
	int arr[6]={10,20,20,30,30,30};
	int n=6;
	remove_duplicate(arr,n);
}