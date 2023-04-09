#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool prime(int n)
{
	if(n==1)
		return false;
	else if(n==2 || n==3)
		return true;
	else if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<n;i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
			return false;
	}
	return true;

}




/* most naive
int prime_factors(int n)
{
	for(int i=2;i<n;i++)
	{
		if(prime(i))
		{
			int x=i;
			while(n%x==0)
			{
				cout<<i<<"\t";
				x=x*i;
			}
		}
	}
}

*/

/* naive
int prime_factors(int n)
{
	for(int i=2;i*i<=n;i++)
	{

		if(prime(i))
		{
			while(n%i==0)
			{
				cout<<i<<"\t";
				n=n/i;
			}
		}
	}
	if(n>1)
	{
		cout<<n;
	}
}

*/

int prime_factors(int n)
{
	if(n<=1)
		return 0;
	while(n%2==0)
	{
		cout<<2<<"\t";
		n=n/2;
	}
	while(n%3==0)
	{
		cout<<3<<"\t";
		n=n/3;
	}
	for(int i=5;i*i<n;i-i+6)
	{
		while(n%i==0)
		{
			cout<<i<<"\t";
			n=n/i;
		}
		while(n%(i+2)==0)
		{
			cout<<i+2<<"\t";
			n=n/(i+2);
		}	
	}	
	if(n>3)
		cout<<n;
}




int main()
{
	int n=84;
	prime_factors(n);
}