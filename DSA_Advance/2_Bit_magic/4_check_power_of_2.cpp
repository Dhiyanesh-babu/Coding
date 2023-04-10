#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive
bool ispow(int n)
{
	if(n==0)
		return false;
	while(n!=1)
	{
		if(n%2!=0)
			return false;
		n=n/2;
	}
	return true;
}
*/

/*
bool ispow(int n)
{
	if(n==0)
		return false;
	if((n&(n-1))==0)
		return true;
	else
		return false;
}
*/



bool ispow(int n)
{
	return (n!=0)&&((n&(n-1))==0);
}



int main()
{
	int n=4;
	cout<<ispow(n);
}

