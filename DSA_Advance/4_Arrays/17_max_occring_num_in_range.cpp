#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int max_occurence(int l[], int r[], int n)
{
	vector<int> arr(1000);
	for(int i=0;i<n;i++)
	{
		arr[l[i]]++;
		arr[r[i]]--;
	}
	int max=arr[0];
	int res=0;
	for(int i=1;i<1000;i++)
	{
		cout<<arr[i];
		arr[i]=arr[i]+arr[i-1];
		if(arr[i]>max)
		{
			max=arr[i];
			res=i;
		}
	}
	cout<<res;
}







int main()
{
	int l[4]={1,2,3};
	int r[4]={3,5,7};
	int n=3;
	max_occurence(l,r,n);

}