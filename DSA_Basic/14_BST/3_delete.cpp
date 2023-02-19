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

node *getsuc(node *root)
{
	node *curr = root->right;
	while(curr!=NULL && curr->left!=NULL)
		curr=curr->left;
	return curr;
}


node *deletee(node *root, int x)
{
	if(root==NULL)
		return root;
	if(root->key>x)
		root->left = deletee(root->left,x);
	else if(root->key<x)
		root->right = deletee(root->right,x);
	else
	{
		if(root->left==NULL)
		{
			node *temp = root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			node *temp = root->left;
			delete(root);
			return temp;
		}
		else
		{
			node *temp = getsuc(root);
			root->key = temp->key;
			root->right = deletee(root->right,temp->key);
		}
		
	}
	return root;
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
	levelorder(root);
	cout<<"\n";
	root = deletee(root,20);
	levelorder(root);

}