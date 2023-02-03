#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct myhash
{
	int bucket;
	list<int> *table;
	myhash(int b)
	{
		bucket = b;
		table = new list<int>[bucket];
	}


	int hash(int key)
	{
		return key%bucket;
	}


	bool search(int key)
	{
		int i = hash(key);
		for(auto x:table[i])
		{
			if(x==key)
			{
				cout<<"found";
				return true;
			}
		}
		cout<<"not found";
		return false;
	}


	void insert(int key)
	{
		int i = hash(key);
		table[i].push_back(key);
	}

	void deletee(int key)
	{
		int i = hash(key);
		table[i].remove(key);
	}

	void print()
	{
		for(auto x:table[2])
		{
			cout<<x<<"\t";
		}
	}

};


int main()
{
	cout<<"hi\n";
	struct myhash h1(7);
	h1.insert(51);
	h1.insert(65);
	h1.insert(72);
	h1.print();
	h1.deletee(65);
	h1.print();
	h1.search(52);
	
}