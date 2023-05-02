#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive

int max_length(int arr[], int n)
{
	int count = 1;
	for(int i=0;i<n;i++)
	{
		int curr=1;
		for(int j=i+1;j<n;j++)
		{
			if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0))
				curr++;
			else
				break;
		}
		count = max(count, curr);
	}
	cout<<count;


}

*/
int max_length(int arr[], int n)
{
	int count = 1;
	int res=1;
	for(int j=1;j<n;j++)
	{
		if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0))
		{
			count++;
			res = max(res,count);
		}
		else
			count=1;
	}
	cout<<res;
}



int main()
{
	int arr[6] = {5,10,20,6,3,8};
	int n=6;
	max_length(arr,n);
}