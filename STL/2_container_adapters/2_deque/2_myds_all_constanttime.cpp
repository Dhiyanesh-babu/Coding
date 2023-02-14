#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

struct myds
{
	deque<int> dq;
	void insertmin(int x)
	{
		dq.push_front(x);
	}
	void insertmax(int x)
	{
		dq.push_back(x);
	}
	int getmin()
	{
		return dq.front();
	}
	int getmax()
	{
		return dq.back();
	}
	void extractmin()
	{
		dq.pop_front();
	}
	void extractmax()
	{
		dq.pop_back();
	}
};

int main()
{
	myds ds;
	ds.insertmin(10);
	ds.insertmin(9);
	ds.insertmin(8);
	ds.insertmax(100);
	ds.insertmax(200);
	ds.insertmax(300);
	cout<<ds.getmin()<<"\t";
	cout<<ds.getmax()<<"\t";
	ds.extractmax();
	ds.extractmin();
	cout<<ds.getmin()<<"\t";
	cout<<ds.getmax()<<"\t";



}