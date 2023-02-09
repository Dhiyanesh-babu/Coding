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


node *insert(node *head, int x)
{
	node *temp = new node(x);
	if(head==NULL)
		return temp;
	node *curr = head;
	while(curr->next!=NULL)
		curr = curr->next;
	curr->next = temp;
	temp->prev = curr;
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