#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x=3,y=6;
	cout<<(x&y)<<"\t";
	cout<<(x|y)<<"\t";
	cout<<(x^y)<<"\t";
	unsigned int a=3;
	cout<<(a<<1)<<"\t";
	cout<<(a<<2)<<"\t";
	cout<<(a<<4)<<"\t";
	a=1;
	cout<<(~a)<<"\t";

	int b=1,c=5;
	cout<<(~b)<<"\t"<<(~c);
}