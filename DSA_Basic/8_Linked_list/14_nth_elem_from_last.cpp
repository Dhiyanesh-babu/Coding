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


/* naive

int element(node  *head,int n)
{
	int length=0;
	for(node *curr=head;curr!=NULL;curr=curr->next)
		length++;
	if(length<n)
		return -1;
	node *curr = head;
	for(int i=0;i<length-n+1;i++)
	{
		curr=curr->next;
	}
	return curr->data;

}

*/

int element(node *head, int n)
{
	node *a = head;
	node *b = head;
	for(int i=1;i<n;i++)
		b=b->next;
	while(b->next!=NULL)
	{
		a=a->next;
		b=b->next;
	}
	
	return a->data;
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
	int n = 3;
	int x = element(head,n);
	cout<<x<<"\n";
	traverse(head);
}