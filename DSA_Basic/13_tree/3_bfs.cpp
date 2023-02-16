
#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
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
/* iterative
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
*/



int height(node *root)
{
	if(root==NULL)
		return 0;
	else 
	{
		return max(height(root->left),height(root->right))+1;
	}
}


int printlevel(node *root, int level)
{
	if(root==NULL)
		return 0;
	else if(level==0)
		cout<<root->key<<"\t";
	else
	{
		printlevel(root->left,level-1);
		printlevel(root->right,level-1);
	}
	return 0;
}


int levelorder(node *root)
{
	int h = height(root);
	for(int i=0;i<h;i++)
		printlevel(root,i);
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
	levelorder(root);
}