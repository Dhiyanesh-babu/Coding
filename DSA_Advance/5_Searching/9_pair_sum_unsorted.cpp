#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<set>
#include<unordered_set>
using namespace std;

/* naive

bool search(int arr[], int x, int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(arr[i]+arr[j]==x)
				return true;

	return false;
}


*/


bool search(int arr[], int x, int n)
{
	unordered_set<int>s;
	for(int i=0;i<n;i++)
	{
		int temp=x-arr[i];
		if(s.find(temp)!=s.end())
		{
			return true;
		}
		else
			s.insert(arr[i]);
			
	}
	return false;

}



int main()
{
	int arr[]={3,5,9,2,8,10,11};
	int x=17,n=7;
	cout<<search(arr,x,n);
}