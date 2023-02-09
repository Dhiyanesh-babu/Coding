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



node *deletee(node  *head, int x)
{
	node *q = head;
	node *p = NULL;
	while(q!=NULL)
	{
		if(q->data==x)
		{
			if(q==head)
			{
				head = q->next;
				delete(q);
				return head;
			}
			else
			{
				p->next=q->next;
				delete(q);
				return head;
			}
		}
		else
		{
			p=q;
			q=q->next;
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
	node *t2 = new node(30);
	node *t3 = new node(40);
	node *t4 = new node(50);
	head->next=t1;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	int data = 30;
	head = deletee(head,data);
	traverse(head);
}