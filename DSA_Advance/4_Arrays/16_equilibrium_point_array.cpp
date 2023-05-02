#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


/* n space and n time
naive


int pre_arr[6];
int suff_sum[6];

int prefix_sum(int arr[], int n)
{
	pre_arr[0]=arr[0];
	for(int i=1;i<n;i++)
		pre_arr[i]=arr[i]+pre_arr[i-1];
}

int suffix_sum(int arr[], int n)
{
	suff_sum[0]=arr[n-1];
	for(int i=n-2;i>=0;i--)
		suff_sum[n-i-2]=arr[i]+suff_sum[n-i-3];
}

bool equilibrium_pt(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<suff_sum[i]<<"\t"<<suff_sum[i]<<"\n";
}

int main()
{
	int arr[6]={3,4,8,-9,20,6};
	int n=6;
	prefix_sum(arr,n);
	suffix_sum(arr,n);
	
	equilibrium_pt(arr,n);

}


*/


int equilibrium_pt(int arr[], int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+arr[i];
	int l_sum=0;
	for(int i=0;i<n;i++)
	{
		if(l_sum==sum-arr[i])
			return true;
		l_sum = l_sum+arr[i];
		sum=sum-arr[i];
	}
	return false;
}

 
int main()
{
	int arr[6]={3,4,8,-9,20,6};
	int n=6;	
	cout<<equilibrium_pt(arr,n);


}