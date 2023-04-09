#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*recursive

int fact(int n)
{
	if(n==0)
		return 1;
	return n*fact(n-1);
}
*/



int main()
{
	int n = 4;
	//cout<<fact(n);
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res=res*i;
	}
	cout<<res;
}