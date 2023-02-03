#include<iostream>
#include<unordered_map>
using namespace std;

/* naive


int frequency(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		bool flag=false;
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i]==arr[j])
			{
				flag=true;
				break;
			}
		}
		if(flag==true)
			continue;
		int freq=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				freq++;
			}
		}
		cout<<arr[i]<<"\t"<<freq<<"\n";
	}
}

*/


int frequency(int arr[],int n)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	for(auto x:m)
	{
		cout<<x.first<<"\t"<<x.second<<"\n";
	}
}






int main()
{
	int arr[]={1,2,3,1,2,3,4,5,5,4,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
}