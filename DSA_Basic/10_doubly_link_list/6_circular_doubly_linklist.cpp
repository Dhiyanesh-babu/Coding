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

/* front 
node *insert(node *head, int x)
{
	node *temp = new node(x);
	if(head==NULL)
	{
		temp->next=temp;
		temp->prev=temp;
		return temp;
	}
	temp->prev=head->prev;
	head->prev->next=temp;
	temp->next=head;
	head->prev=temp;
	return temp;
}
*/


node *insert(node *head, int x)
{
	node *temp = new node(x);
	if(head==NULL)
	{
		temp->next=temp;
		temp->prev=temp;
		return temp;
	}
	temp->prev=head->prev;
	head->prev->next=temp;
	temp->next=head;
	head->prev=temp;
	return head;
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
	traverse(head);
}