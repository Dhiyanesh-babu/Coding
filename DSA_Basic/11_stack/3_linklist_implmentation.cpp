#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};

node *push(int x, node *head)
{
	node *temp = new node(x);
	temp->next=head;
	return temp;
}

node *pop(node *head)
{
	if(head==NULL)
		return NULL;
	int res = head->data;
	node *temp = head;
	head = head->next;
	return head;

}




int main()
{
	node *head = NULL;
	head = push(10,head);
	head = push(20,head);
	head = push(30,head);
	head = pop(head);
	cout<<head->data;
	cout<<"hi"<<"\t";
}