#include<iostream>
#include<unordered_set>
using namespace std;


int main()
{
	unordered_set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(30);
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<(*it);
		cout<<"\n";
	}
	if(s.find(10)==s.end())
	{
		cout<<"no";
		cout<<"\n";
	}
	else
	{
		cout<<"found"<<(*s.find(10));
		cout<<"\n";
	}
	cout<<s.count(10);
	cout<<"\n";
	cout<<s.count(60);
	cout<<"\n";
	s.erase(10);
	for(auto it=s.cbegin();it!=s.cend();it++)
	{
		cout<<(*it);
		cout<<"\n";
	}
	auto it=s.begin();
	s.erase(20);
	for(auto it=s.cbegin();it!=s.cend();it++)
	{
		cout<<(*it);
		cout<<"\n";
	}
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.erase(s.begin(),s.end());
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<(*it);
		cout<<"\n";
	}
}

