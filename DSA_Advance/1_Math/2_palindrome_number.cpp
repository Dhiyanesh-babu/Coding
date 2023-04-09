#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

	int x = 1778771;
	int n = 1778771;
	int rev=0;
	while(n!=0)
	{
		rev = (rev*10) + n%10;
		n = n/10;
	}
	if(x==rev)
		cout<<"palindrome";
	else
		cout<<"not palindrome";

}