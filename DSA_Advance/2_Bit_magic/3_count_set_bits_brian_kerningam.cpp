#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
naive


int count_setbit(int n)
{
	int res=0;
	while(n>0)
	{
		if(n&1==1)
			res++;
		n=n>>1;
	}
	cout<<res;
}


int count_setbit(int n)
{
	int res=0;
	while(n>0)
	{
		if(n%2!=0)
			res++;
		n=n/2;

	}
	cout<<res;
}



int count_setbit(int n)
{
	int res=0;
	while(n>0)
	{
		res=res+(n&1);
		n=n>>1;
	}
	cout<<res;
}


*/

/* brian keringman
int count_setbit(int n)
{
	int res=0;
	n=40;
	while(n>0)
	{
		n=n&(n-1);
		res++;
	}
	cout<<res;
}
*/


int table[256];
void initialise()
{
	table[0]=0;
	for(int i=1;i<256;i++)
	{
		table[i]=(i&1)+table[i/2];
	}
}

int count_setbit(int n)
{
	int res = table[n&0xff];
	n=n>>8;
	res = res + table[n&0xff];
	n=n>>8;
	res = res + table[n&0xff];
	n=n>>8;
	res = res + table[n&0xff];
	n=n>>8;

	cout<<res;
}


int main()
{
	int n=258;
	initialise();
	count_setbit(n);
}