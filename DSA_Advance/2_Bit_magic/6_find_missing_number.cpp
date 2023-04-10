#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4]={1,2,3,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=n+1;
	int res=0;
	for(int i=1;i<=m;i++)
		res=res^i;
	for(int j=0;j<n;j++)
		res=res^arr[j];
	cout<<res;
}