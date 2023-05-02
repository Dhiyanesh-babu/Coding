#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive 

int leaders(int arr[], int n)
{
	for(int i=0; i<n;i++)
	{
		bool flag = true;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>=arr[i])
			{
				flag = false;
			}
		}
		if(flag==true)
		{
			cout<<arr[i]<<"\t";
		}
	}

}

*/

int leaders(int arr[], int n)
{
	int leader=arr[n-1];
	cout<<leader<<"\t";
	for(int i=n-2; i>=0;i--)
	{
		if(arr[i]>leader)
		{
			leader=arr[i];
			cout<<leader<<"\t";
		}
	}

}




int main()
{
	int arr[7] = {7,10,4,10,6,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	leaders(arr,n);
}