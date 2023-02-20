#include<iostream>
#include<bits/stdc++.h>
using namespace std;




class heap
{
	public:
	int *arr;
	int size,capacity;
public:
	heap(int c)
	{
		size = 0;
		capacity = c;
		arr = new int[c];
	}
	int left(int i)
	{
		return (2*i + 1);
	}
	int right(int i)
	{
		return (2+i + 2);
	}
	int parent(int i)
	{
		return (i-1)/2;
	}
	void swap(int *a, int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
	void show()
	{
		cout<<"hi";
	}
	void insert(int x)
	{

		if(size==capacity)
			return ;
		size++;
		arr[size-1] = x;
		int i = size-1;
		while (i!= 0 && arr[parent(i)] > arr[i])
		{
			swap(&arr[i],&arr[parent(i)]);
			i = parent(i);
		}
	}
	int minheapify(int i)
	{
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if(l<size && arr[l]<arr[i])
			smallest = l;
		if(r<size && arr[r]<arr[smallest])
			smallest = r;
		if(smallest!=i)
		{
			swap(&arr[i],&arr[smallest]);
			minheapify(smallest);
		}
		return 0;
	}
	int extractmin()
	{
		if(size<=0)
			return INT_MAX;
		if(size==1)
		{
			size--;
			return arr[0];
		}
		int root = arr[0];
		swap(&arr[0],&arr[size-1]);
		size--;
		minheapify(0);
		return root;
	}
	void decreasekey(int i,int x)
	{
		arr[i] = x;
		while(i!=0 && arr[parent(i)] > arr[i])
		{
			swap(&arr[i], &arr[parent(i)]);
			i = parent(i);
		}
	}
	void deletee(int i)
	{
		decreasekey(i,INT_MIN);
		cout<<extractmin()<<"\t";
		cout<<"in func"<<"\t";
	}
	void buildheap()
	{
		for(int i=(size-2)/2;i>=0;i--)
			minheapify(i);
	}
};


int main()
{
	cout<<"hi"<<"\t";
	heap h(10);
	h.insert(36);
	h.insert(15);
	h.insert(12);
	h.insert(45);
	h.insert(24);
	h.insert(58);
	h.buildheap();
	//h.minheapify(6);
	cout<<"hi1"<<"\t";
	cout<<h.extractmin()<<"\t";
	cout<<h.extractmin()<<"\t";
	cout<<h.extractmin()<<"\t";
	cout<<h.extractmin()<<"\t";
	cout<<h.extractmin()<<"\t";
	cout<<h.extractmin()<<"\t";


	/*
	h.decreasekey(2,25);
	cout<<"decreased"<<"\t";
	h.deletee(0);
	cout<<"deleted"<<"\t";
	*/



}