#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main()
{
	/*
	deque<int> q;
	q.push_front(10);
	q.push_front(20);
	q.push_back(30);
	q.push_back(40);
	q.push_front(50);
	q.push_front(60);
	cout<<q.front()<<"\t";
	cout<<q.back()<<"\t";
	cout<<"\n";
	q.pop_front();
	cout<<q.front()<<"\t";
	cout<<q.back()<<"\t";
	cout<<"\n";
	for(auto x:q)
		cout<<x<<"\t";
	cout<<"\n";

	deque<int> dq = {10,20,30,40};
	auto it = dq.begin();
	it++;
	dq.insert(it,20);
	dq.pop_front();
	dq.pop_back();
	cout<<dq.size();
	cout<<"\n";
	for(auto x:dq)
		cout<<x<<"\t";
*/
	deque<int> dq = {10,20,30,40,50,60};
	auto it = dq.begin();


	it = dq.insert(it,8);
	for(auto x:dq)
		cout<<x<<"\t";
	cout<<"\n";

	it = dq.insert(it,9);
	for(auto x:dq)
		cout<<x<<"\t";
	cout<<"\n";

	/* it = dq.insert(it,2,3);
	for(auto x:dq)
		cout<<x<<"\t";
	cout<<"\n"; */

	it = dq.erase(it+2);
	for(auto x:dq)
		cout<<x<<"\t";
	cout<<"\n";
	cout<<(*it)<<"\t";





}