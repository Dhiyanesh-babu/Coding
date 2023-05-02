#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int freq(int arr[], int n)
{
	int res=1;
	int pos=0;
	for(int i=1;i<n;i++)
	{
		while(arr[i]==arr[pos])
		{
			res++;
			i++;
		}
		cout<<arr[pos]<<"\t"<<res<<"\n";
		pos=res+pos, res=1;
	}

}




int main()
{
	int arr[8]={10,10,10,25,25,25,30,30};
	int n=8;
	freq(arr,n);
}