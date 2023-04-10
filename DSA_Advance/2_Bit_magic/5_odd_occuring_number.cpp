#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive

int main()
{
	int arr[7] = {4,3,4,4,4,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count%2!=0)
		{
			cout<<arr[i];
		}
	}
}

*/

int main()
{
	int arr[7]={4,3,4,4,4,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int res=0;
	for(int i=0;i<n;i++)
	{
		res=res^arr[i];
	}
	cout<<res;
}