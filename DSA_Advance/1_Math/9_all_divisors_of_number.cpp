#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive
int factors(int n)
{
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\n";
		}
	}
}

*/

/* efficient unordered
int factors(int n)
{
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
			if(i!=n/i)
			{
				cout<<n/i<<"\t";
			}
		}
	}
}
*/

int factors(int n)
{
	int i;
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<"\t";
		}
	}
	for(;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<n/i<<"\t";
		}
	}
}


int main()
{
	int n=15;
	factors(n);
}