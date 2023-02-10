#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
	cout<<"hi"<<"\t";
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	cout<<s.size()<<"\t";
	cout<<s.top()<<"\t";
	s.pop();
	cout<<s.top()<<"\t";

	while(s.empty()==false)
	{
		cout<<s.top();
		s.pop();
	}
}