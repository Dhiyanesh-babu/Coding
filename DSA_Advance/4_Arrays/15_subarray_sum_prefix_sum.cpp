#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int pre_arr[7];

int prefix_sum(int arr[], int n)
{
	pre_arr[0]=arr[0];
	for(int i=1;i<n;i++)
		pre_arr[i]=arr[i]+pre_arr[i-1];
}

int query(int n, int a, int b)
{
	return pre_arr[b]-pre_arr[a-1];
}





int main()
{
	int arr[7]={3,8,3,9,6,5,4};
	int n= 7;
	prefix_sum(arr,n);
	int a=2,b=6;
	cout<<query(n,a,b);

}