#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/* naive
int power(int a, int b)
{
	int res=1;
	for(int i=0;i<b;i++)
	{
		res=res*a;
	}
	return res;
}

*/


/* recursive
int power(int x, int n)
{
	if(n==0)
		return 1;
	int temp=power(x,n/2);
	temp=temp*temp;
	if(n%2==0)
		return temp;
	else
		return temp*x;
}

*/

/* best
int power(int x, int n)
{
	int res=1;
	while(n>0)
	{
		if(n%2!=0)
			res=res*x;
		x=x*x;
		n=n/2;
	}
	return res;
}

*/

int power(int x, int n)
{
	int res=1;
	while(n>0)
	{
		if(n&1)
			res=res*x;
		x=x*x;
		n=n>>1;
	}
	return res;
}



int main()
{
	int x=4,n=5;
	cout<<power(x,n);
}