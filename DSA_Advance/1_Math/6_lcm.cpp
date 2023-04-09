#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* naive

int lcm(int a, int b)
{
	int res=max(a,b);
	while(res>0)
	{
		if(res%a==0 && res%b==0)
			return res;
		res++;
	}
	return res;
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



int lcm(int a, int b)
{
	int mul = a*b;
	int gcdd = gcd(a,b);
	int lcm = mul/gcdd;
	return lcm;
}









int main()
{
	int a=12,b=15;
	int res = lcm(a,b);
	cout<<res;
}