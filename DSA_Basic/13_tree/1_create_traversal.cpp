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



int inorder(node *root)
{
	if(root==NULL)
		return 0;
	inorder(root->left);
	cout<<root->key<<"\t";
	inorder(root->right);
}


int postorder(node *root)
{
	if(root!=NULL)
	{
	postorder(root->left);
	postorder(root->right);
	cout<<root->key<<"\t";
	}

}


int preorder(node *root)
{
	if(root!=NULL)
	{
		cout<<root->key<<"\t";
		preorder(root->left);
		preorder(root->right);
	}
}



int main()
{
	node *root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->left->right->left = new node(70);
	root->left->right->right = new node(80);
	root->right->right = new node (60);
	inorder(root);
	cout<<"\n";
	preorder(root);
	cout<<"\n";
	postorder(root);
}