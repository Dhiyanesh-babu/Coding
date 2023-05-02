#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive
int trapping_rain(int arr[], int n)
{
	int res=0;

	for(int i=1;i<n-1;i++)
	{
		int l_max=arr[i];
		int r_max=arr[i];
		for(int j=0;j<i;j++)
		{
			l_max=max(l_max,arr[j]);
		}
		for(int j=i+1;j<n;j++)
		{
			r_max=max(r_max,arr[j]);
		}
		
		res=res+(min(l_max,r_max))-arr[i];
	}
	cout<<res;
}

*/

int trapping_rain(int arr[],int n)
{
	int l_arr[n], r_arr[n], res=0;
	l_arr[0]=arr[0];
	r_arr[0]=arr[n-1];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>l_arr[i-1])
		{
			l_arr[i]=arr[i];
		}
		else
		{
			l_arr[i]=l_arr[i-1];
		}
	}
	for(int i=n-2;i>=0;i--)
	{
		r_arr[i]=max(r_arr[i+1],arr[i]);
	}

	for(int i=0;i<n;i++)
	{
		res=res+(min(l_arr[i],r_arr[i])-arr[i]);
	}
	cout<<res;
}





int main()
{
	int arr[]={3,0,1,2,5};
	int n = 5;
	trapping_rain(arr,n);
}