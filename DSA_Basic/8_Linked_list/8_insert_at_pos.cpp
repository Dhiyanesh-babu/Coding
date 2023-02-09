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



node *insert(node  *head, int num,int pos)
{
	node *temp = new node(num);
	if(pos==1)
	{
		temp->next=head;
		return temp;
	}
	node *curr = head;
	for(int i=1;i<=pos-2 && curr!=NULL;i++)
		curr=curr->next;
	temp->next=curr->next;
	curr->next=temp;
	return head;
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
	int x=60;
	int pos = 3;
	head = insert(head,x,pos);
	traverse(head);
}