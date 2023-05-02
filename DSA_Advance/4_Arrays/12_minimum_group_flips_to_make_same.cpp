#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/* naive

int min_flips(int arr[], int n)
{
	int count[2]={0,0};
	int curr;
	if(arr[0]==0)
	{
		curr=0;
		arr[curr]++;
	}
	
	else
	{
		curr=1;
		count[curr]++;
	}
	for(int i=1;i<n;i++)
	{
		if(arr[i]==curr)
			continue;
		else
		{
			curr=arr[i];
			count[curr]++;
		}
	}
	int maj;
	cout<<count[0]<<"\t"<<count[1]<<"\n";
	if(count[0]>count[1])
		maj=1;
	else
		maj=0;
	int a,b;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==maj)
		{
			a=i;
			while(arr[i+1]==maj)
			{
				i++;
			}
			b=i;
			cout<<"from "<<a<<" to "<<b<<"\n";
		}
	}
}

*/

int min_flips(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			if(arr[i]!=arr[0])
			{
				cout<<"from "<<i<<" to ";
			}
			else
			{
				cout<<i-1<<"\n";
			}
		}
	}
	if(arr[n-1]!=arr[0])
		cout<<n-1<<"\n";
}


int main()
{
	int arr[12]={1,0,0,0,1,1,0,0,1,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	min_flips(arr,n);

}