
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int key;
	node *left; 
	node *right;
	node(int k)
	{
		key = k;
		left = NULL;
		right = NULL;
	}
};

node *insert(node *root, int x)
{
	node *curr = root;
	node *parent = NULL;
	node *temp = new node(x);
	while(curr!=NULL)
	{
		parent = curr;
		if(curr->key>x)
			curr = curr->left;
		else if(curr->key<x)
			curr = curr->right;
		else
			return root;
	}
	if(parent==NULL)
		return temp;
	else if(parent->key<x)
		parent->right = temp;
	else if(parent->key>x)
		parent->left = temp;
	return root;

}
/* recursive
node *insert(node *root, int x)
{
	if(root==NULL)
		return new node(x);
	else if(root->key<x)
		root->right = insert(root->right,x);
	else if(root->key>x)
		root->left = insert(root->left,x);
	return root;
}
*/


int levelorder(node *root)
{
	queue<node *> q;
	q.push(root);
	while(q.empty()==false)
	{
		int size = q.size();
		for(int i=0;i<size;i++)
		{
			node *temp = q.front();
			q.pop();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
			cout<<temp->key<<"\t";
		}
	}
}

int main()
{
	node *root = new node(15);
	root->left = new node(5);
	root->right = new node(20);
	root->left->left = new node(3);
	root->right->right = new node (80);
	root->right->left = new node (18);
	root->right->left->left = new node (16);
	root = insert(root,7);
	levelorder(root);

}