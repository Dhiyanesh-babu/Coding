#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/* super naive

int left_rotate(int arr[], int n)
{
	int temp=arr[0];
	for(int j=0;j<n-1;j++)
	{
		arr[j]=arr[j+1];
	}
	arr[n-1]=temp;

}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int n=5,d=2;
	for(int i=0;i<d;i++)
	{
		left_rotate(arr,n);
	}
	for(int g=0;g<n;g++)
	{
		cout<<arr[g]<<"\n";
	}
}

*/

/* naive time + extra space
int left_rotate(int arr[], int n, int d)
{
	int temp[d];
	for(int i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	for(int j=0;j<n-d;j++)
	{
		arr[j]=arr[j+d];
	}
	for(int i=0;i<d;i++)
	{
		arr[n-d+i]=temp[i];
	}

}
*/
int reverse(int arr[], int low, int high)
{
	while(low<high)
	{
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}


int left_rotate(int arr[], int n, int d)
{
	  reverse(arr,0,d-1);
	  reverse(arr,d,n-1);
	  reverse(arr,0,n-1);
}


int main()
{
	int arr[5] = {1,2,3,4,5};
	int n=5,d=2;
	left_rotate(arr,n,d);
	for(int g=0;g<n;g++)
	{

		cout<<arr[g]<<"\n";
	}
}