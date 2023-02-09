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

int middle(node  *head)
{
	if(head==NULL)
	{
		return 0;
	}
	int count=1;
	node *curr = head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
		count++;
	}
	curr = head;
	for(int i=1;i<=count/2;i++)
	{
		curr=curr->next;
	}
	return curr->data;

}

*/

int middle(node *head)
{
	node *slow = head;
	node *fast = head;
	if(head==NULL)
		return 0;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->data;
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
	int x = middle(head);
	cout<<x<<"\n";
	traverse(head);
}