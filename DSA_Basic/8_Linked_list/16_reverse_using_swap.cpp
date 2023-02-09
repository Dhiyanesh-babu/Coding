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



node *element(node *head)
{
	node *p=head,*q=head,*curr=head;

	int len=0;
	while(curr!=NULL)
	{
		len++;
		curr=curr->next;
	}
	int i=0,j=len-1;
	while(i<j)
	{
		int k=0;
		while(k<j)
		{
			q=q->next;
			k++;
		}
		int temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->next;
		q = head;
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
	element(head);
	traverse(head);
}