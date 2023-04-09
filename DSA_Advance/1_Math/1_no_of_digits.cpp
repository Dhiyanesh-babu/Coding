#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/* iterative
int main()
{
	int n = 6587;
	int count = 0;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	cout<<count;
}
*/

/* recursive
int find(int n)
{
	if(n==0)
		return 0;
	return 1+find(n/10);
}
int main()
{
	int n = 6578;
	cout<<find(n);
}
*/

int main()
{

	int x = 138;
	double ans = floor(log10(x)+1);
	cout<<ans;
	return 0;
}
