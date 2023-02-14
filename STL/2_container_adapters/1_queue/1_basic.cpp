#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	cout<<q.front()<<"\t";
	cout<<q.back()<<"\t";
	cout<<"\n";
	q.pop();
	cout<<q.front()<<"\t";
	cout<<q.back()<<"\t";
	cout<<"\n";
	while(q.empty()==false)
	{
		cout<<q.front()<<"\t"<<q.back()<<"\t";
		cout<<"\n";
		q.pop();
	}
}