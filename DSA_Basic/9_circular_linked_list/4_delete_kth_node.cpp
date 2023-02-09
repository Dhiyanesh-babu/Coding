#include<iostream>
#include<bits/stdc++.h>
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

node *deletee(node *head, int k)
{
	if(head==NULL)
		return NULL;
	if(k==1)
	{
		if(head==NULL)
			return NULL;
		else if(head->next==NULL)
		{
			delete(head);
			return NULL;
		}
		else
		{
			node *temp = head->next;
			head->data = head->next->data;
			head->next = head->next->next;
			delete(temp);
			return head;
		}
	}
	node *curr = head;
	for(int i=0;i<k-2;i++)
		curr=curr->next;
	node *temp = curr->next;
	curr->next = curr->next->next;
	delete(temp);
	return head;
}
node *insert(node *head, int x)
{
	node *temp = new node(x);
	if(head==NULL)
	{
		temp->next=temp;
		return temp;
	}
	else
	{
		temp->next = head->next;
		head->next = temp;

		int a = head->data;
		head->data = temp->data;
		temp->data = a;
		return temp;
	}
}


int traverse(node *head)
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
	int k = 3;
	head = deletee(head,k);
	traverse(head);
}