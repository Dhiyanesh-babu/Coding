#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/* naive

int sqaure_root(int x)
{
	int i=1;
	while(i*i<=x)
	{
		i++;
	}
	return(i-1);
}
*/

int sqaure_root(int x)
{
	int low=1,high=x,ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		int sq=mid*mid;
		if(sq==x)
			return mid;
		else if(sq>x)
			high=mid-1;
		else
		{
			low=mid+1;
			ans=mid;
		}
	}
	return ans;
}



int main()
{
	int x=25;
	cout<<sqaure_root(x);
}