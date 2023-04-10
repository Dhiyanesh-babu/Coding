#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pow(int x, int n)
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
	string s = "abc";
	int n=s.length();
	int powersize=pow(2,n);
	for(int count=0;count<powersize;count++)
	{
		for(int j=0;j<n;j++)
		{
			if(count&(1<<j)!=0)
			{
				cout<<s[j];
			}
		}
		cout<<"\n";
	}
}