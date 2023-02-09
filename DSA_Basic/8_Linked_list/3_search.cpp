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


/* iterative

node search(node *head, int data)
{
	node *curr = head;
	while(curr!=NULL)
	{
		if(curr->data==data)
		{
			cout<<"found";
			return 0;
		}
		else
		{
			curr=curr->next;
		}
	}
	cout<<"not found";
}
*/

int search(node *head, int data)
{
	if(head==NULL)
		return -1;
	if(head->data==data)
	{
		cout<<"found";
		return 1;
	}
	else
	{
		int res = search(head->next,data);
		if(res==-1)
		{
			return -1;
		}
		else
		{
			return (res+1);
		}
	}

}

int main()
{

	node *head = new node(10);
	node *temp1 = new node(20);
	node *temp2 = new node(30);
	node *temp3 = new node(40);
	int num = 40;

	head->next = temp1;
	temp1->next = temp2;
	temp2->next = temp3;
	cout<<search(head,num);
	return 0;
}