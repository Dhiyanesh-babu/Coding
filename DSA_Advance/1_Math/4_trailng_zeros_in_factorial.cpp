#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive

int factorial(int n)
{
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}

int zeros(int n)
{
	int count = 0;
	while(n%10==0)
	{
		count++;
		n=n/10;
	}
	return count;
}





int main()
{
	int n=25;
	int res = factorial(n);
	cout<<res<<"\n";
	int res2 = zeros(res);
	cout<<res2;

}

*/

int zeros(int n)
{
	int res=0;
	for(int i=5;i<=n;i=i*5)
	{
		res = res + n/i;
	}
	return res;
}

int main()
{
	int n=251;
	int res = zeros(n);
	cout<<res;
}