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

node *element(node *head)
{
	vector<int> v;
	for(node *curr=head;curr!=NULL;curr=curr->next)
	{
		v.push_back(curr->data);
	}
	for(node *curr=head;curr!=NULL;curr=curr->next)
	{
		curr->data = v.back();
		v.pop_back();
	}
	return head;
}

*/


/* efficient

node *element(node *head)
{
	node *curr = head;
	node *prev = NULL;
	while(curr!=NULL)
	{
		node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
		
}

*/


/* recursive 1

node  *element(node *head)
{
	if(head==NULL || head->next==NULL)
		return head;
	node *rest_head = element(head->next);
	node *rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
}
*/ 

// recursive 2

node *element(node *head, node *prev)
{
	node *curr = head;
	if(curr==NULL)
		return prev;
	node *next = curr->next;
	curr->next = prev;
	return element(next,curr);
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
	node *prev = NULL;
	head = element(head,prev);
	traverse(head);
}