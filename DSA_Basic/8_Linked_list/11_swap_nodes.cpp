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



node *swap(node  *head, int x, int y)
{

	node *p = head;
	node *q = head;
	node *r = head;
	for(int i=1;i<x-1;i++)
		p=p->next;
	q=p->next;
	r=q->next;
	q->next=r->next;
	r->next=q;
	p->next=r;


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
	node *t2 = new node(30);
	node *t3 = new node(40);
	node *t4 = new node(50);
	head->next=t1;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	int x = 3;
	int y = 4;
	swap(head,x,y);
	traverse(head);
}