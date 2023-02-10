#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int cap = 10;
int arr[10];
int top = -1;

int push(int x)
{
	if(top==cap-1)
	{
		cout<<"its full";
		return 0;
	}
	top++;
	arr[top]=x;
	return 0;
}

int pop()
{
	if(top==-1)
	{
		cout<<"its empty";
		return 0;
	}
	cout<<arr[top];
	top--;
	return 0;
}



int main()
{

	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	pop();
	cout<<"hi";
}