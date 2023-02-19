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


/* recursive
bool search(node *root, int x)
{
	if(root==NULL)
		return false;
	if(x==root->key)
		return true;
	else if(x>root->key)
		return search(root->right,x);
	else
		return search(root->left,x);
}
*/

bool search(node *root, int x)
{
	if(root==NULL)
		return false;
	while(root!=NULL)
	{
		if(root->key==x)
			return true;
		else if(x>root->key)
			root = root->right;
		else
			root = root->left;
	}
	return false;
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
	cout<<search(root,18);

}