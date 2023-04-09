#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*
bool prime(int n)
{
	if(n==1)
		return false;
	else if(n==2 || n==3)
		return true;
	else if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0 || n%(i+2)==0)
			return false;
	}
	return true;


}

*/
/* naive

int prime_nos(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(prime(i))
		{
			cout<<i<<"\t";
		}
	}
}

*/


/* efficient
int prime_nos(int n)
{
	vector<bool> isprime (n+1,true);
	for(int i=2;i*i<=n;i++)
	{
		if(isprime[i])
		{
			for(int j=2*i;j<=n;j=j+i)
			{
				isprime[j]=false;
			}
		}
	}
	for(int j=2;j<=n;j++)
	{
		if(isprime[j])
		{
			cout<<j<<"\t";
		}
	}
}

*/

int prime_nos(int n)
{
	vector<bool> isprime (n+1,true);
	for(int i=2;i*i<=n;i++)
	{
		if(isprime[i])
		{
			for(int j=i*i;j<=n;j=j+i)
			{
				isprime[j]=false;
			}
		}
	}
	for(int j=2;j<=n;j++)
	{
		if(isprime[j])
		{
			cout<<j<<"\t";
		}
	}
}







int main()
{
	int n=30;
	prime_nos(n);
}