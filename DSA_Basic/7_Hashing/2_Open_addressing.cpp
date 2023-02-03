#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct myhash
{
	int *arr;
	int cap,size;


	myhash(int c)
	{
		cap = c;
		size = 0;
		for(int i=0;i<cap;i++)
		{
			arr[i] = -1;
		}

	}


	int hash(int key)
	{
		return key%cap;
	}

	bool insert(int key)
	{
		if(size==cap)
		{
			return false;
		}
		int i = hash(key);
		while( arr[i]!=-1 && arr[i]!= -2 && arr[i] != key )
		{
			i = (i+1) % cap;
		}
		if(arr[i] == key)
		{
			return false;
		}
		else
		{
			arr[i] = key;
			size++;
			cout<<"inserted\n";
			return true;
		}
	}

	bool search(int key)
	{
		int h = hash(key);
		int i = h;
		while(arr[i] != -1)
		{
			if(arr[i] == key)
			{
				cout<<"found\n";
				return true;
			}
			i = (i+1) % cap;
			if(i == h)
			{
				cout<<"not found\n";
				return false;
			}
		}
		cout<<"not found\n";
		return false;
	}

	bool erase(int key)
	{
		int h = hash(key);
		int i = h;
		while(arr[i] != -1)
		{
			if(arr[i] == key)
			{
				arr[i] = -2;
				size--;
				cout<<"deleted\n";
			}
			i = (i+1) % cap;
			if(i == h)
			{
				return false;
			}
		}
		return false;
	}



};





int main()
{
	cout<<"hi\n";
	struct myhash h1(7);
	h1.insert(49);
	h1.insert(56);
	h1.insert(72);
	h1.insert(21);

}