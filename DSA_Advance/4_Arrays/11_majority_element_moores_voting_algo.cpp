#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// occur more than n/2 times


/* naive

int majority_element(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		int count = 1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]==arr[i])
			{
				count++;
			}
		}
		if(count>n/2)
		{
			cout<<i;
			break;
		}
	}
}

*/

int majority_element(int arr[], int n)
{
	 int res=0,count=1;
	 for(int i=1;i<n;i++)
	 {
	 	if (arr[res]==arr[i])
	 		count++;

	 	else
	 		count--;
	 	if(count==0)
	 	{
	 		res=i;
	 		count=1;	
	 	} 	
	 }

	 count=0;
	 for(int i=0;i<n;i++)
	 {
	 	if(arr[res]==arr[i])
	 		count++;
	 }
	 if(count>n/2)
	 	cout<<arr[res];
	 else
	 	cout<<"no";
}




int main()
{
	int arr[5] = {6,8,4,8,8};
	int n=5;
	majority_element(arr,n);
}