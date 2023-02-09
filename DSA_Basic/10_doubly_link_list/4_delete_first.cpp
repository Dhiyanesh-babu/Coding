#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next,*prev;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};


node *deletee(node *head)
{
	if(head==NULL)
		return NULL;
	if(head->next==NULL)
	{
		delete(head);
		return NULL;
	}
	else
	{
		node *temp = head;
		head = head->next;
		head->prev = NULL;
		delete(temp);
		return head;
	}
}


node *insert(node *head, int x)
{
	node *temp = new node(x);
	temp->next = head;
	if(head!=NULL)
	{
		head->prev = temp;
	}
	return temp;
}

node *traverse(node *head)
{
	if(head==NULL)
		return 0;
	cout<<head->data<<"\t";
	for(node *curr=head->next;curr!=head;curr=curr->next)
	{
		cout<<curr->data<<"\t";
	}
}


int main()
{
	cout<<"hi"<<"\t";
	node *head = NULL;
	head = insert(head,10);
	head = insert(head,20);
	head = insert(head,30);
	head = insert(head,40);
	head = insert(head,50);
	head = deletee(head);
	traverse(head);
}