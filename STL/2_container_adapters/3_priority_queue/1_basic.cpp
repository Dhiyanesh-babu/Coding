#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
/* max heap
int main()
{
	priority_queue<int> pq;
	pq.push(15);
	pq.push(10);
	pq.push(24);
	pq.push(34);
	cout<<pq.size()<<"\t";
	cout<<pq.top()<<"\t";
	cout<<"\n";
	while(pq.empty()==false)
	{
		cout<<pq.top()<<"\t";
		pq.pop();
	}
	cout<<"hi";
}
*/

/*min heap
int main()
{
	priority_queue<int,vector<int>, greater<int>> pq;
	pq.push(15);
	pq.push(10);
	pq.push(24);
	pq.push(34);
	cout<<pq.size()<<"\t";
	cout<<pq.top()<<"\t";
	cout<<"\n";
	while(pq.empty()==false)
	{
		cout<<pq.top()<<"\t";
		pq.pop();
	}
	cout<<"hi";
}
*/

/*  
int main()
{
	int arr[] = {15,10,30};
	priority_queue<int> pq(arr,arr+3);
	while(pq.empty()==false)
	{
		cout<<pq.top()<<"\t";
		pq.pop();
	}
}

*/

struct person
{
	int age;
	float ht;
	person(int a, float b)
	{
		age = a;
		ht = b;
	}
};

struct mycmp
{
	bool operator()(person const&p1, person const&p2)
	{
		return p1.ht < p2.ht;
	}
};

int main()
{
	priority_queue<person,vector<person>, mycmp> pq;
}