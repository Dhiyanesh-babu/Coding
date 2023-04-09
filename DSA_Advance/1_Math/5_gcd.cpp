#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


/*naive
int gcd(int a, int b)
{
	int res=min(a,b);
	while(res>0)
	{
		if(a%res==0 && b%res==0)
			break;
		res--;
	}
	return res;
}

*/


/* iterrative
int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
*/

int gcd(int a, int b)
{
	if(b>a)
	{
		swap(a,b);
	}
    if(b==0)
    	return a;
    else
    	return gcd(b,a%b);
}



int main()
{
	int a=10,b=15;
	int res = gcd(a,b);
	cout<<res;
}