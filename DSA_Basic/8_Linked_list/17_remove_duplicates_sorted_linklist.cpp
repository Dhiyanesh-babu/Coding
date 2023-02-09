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



int duplicate(node *head)
{
	node *curr = head;
	while(curr!=NULL && curr->next!=NULL)
	{
		if(curr->data == curr->next->data)
		{
			node *temp = curr->next;
			curr->next = curr->next->next;
			delete(temp);
		}
		else
		{
			curr=curr->next;
		}
	}
}

int *traverse(node *head)
{
	node *curr = head;
	while(curr!=NULL)
	{
		cout<<curr->data<<"\t";
		curr=curr->next;
	}
}

int main()
{
	cout<<"hi"<<"\t";
	node *head = new node(10);
	node *t1 = new node(20);
	node *t2 = new node(20);
	node *t3 = new node(30);
	node *t4 = new node(30);
	node *t5 = new node(30);
	head->next=t1;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	t4->next=t5;
	duplicate(head);
	traverse(head);
}