#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* leftshit

int setbit(int n, int k)
{
	if(n&(1<<(k-1))!=0)
		cout<<"yes";
	else
		cout<<"No";
}

*/

int setbit(int n, int k)
{
	n=13,k=3;
	if((n>>(k-1))&1==1)
		cout<<"yes";
	else
		cout<<"No";
}







int main()
{
	int n=5,k=3;
	setbit(n,k);
}