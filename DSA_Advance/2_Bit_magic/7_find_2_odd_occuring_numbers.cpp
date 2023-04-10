#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={3,4,3,4,5,4,4,6,7,7};
	int n=10;
	int xorr=0;
	for(int i=0;i<n;i++)
		xorr=xorr^arr[i];
	int sb=xorr&(~(xorr-1));
	int res1=0,res2=0;
	for(int j=0;j<n;j++) 
	{
		if(arr[j]&sb!=0)
		{
			res1=res1^arr[j];
		}
		else
		{
			res2=res2^arr[j];
		}
	}
	cout<<res1<<"\t"<<res2;
}