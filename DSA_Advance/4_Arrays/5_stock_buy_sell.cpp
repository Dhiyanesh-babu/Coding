#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

/* naive not working
int max_profit(int price[], int start, int end)
{
	if(end<start)
		return 0;
	int profit = 0;
	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<=end;j++)
		{
			if(price[j]>price[i])
			{
				int curr_profit = price[j]-price[i]+max_profit(price,start,i-1)+max_profit(price,j+1,end);
				profit=max(profit,curr_profit);
			}
		}
	}
	cout<<profit;
}
*/

/*

int stock(int arr[], int n)
{
	int profit=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<arr[i+1])
		{
			profit=profit+arr[i+1]-arr[i];
		}
	}
	cout<<profit;
}


int main()
{
	int arr[5]={1,5,3,8,12};
	int n=5;
	stock(arr,n);
}

*/





int main()
{
	int price[5]={1,5,3,8,12};
	int n=5;
	max_profit(price,0,n-1);
}