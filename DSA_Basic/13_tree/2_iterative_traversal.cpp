#include<iostream>
#include<bits/stdc++.h>
#include<stack>
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
	node *curr = root;
	stack<node *> s;
	while(curr!=NULL || s.empty()==false)
	{
		while(curr!=NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();
		cout<< curr->key<<"\t";
		curr=curr->right;
	}
}

/* naive 2 stacks
int postorder(node *root)
{
	stack<node *> s1;
	stack<node *> s2;
	s1.push(root);
	while(s1.empty()==false)
	{
		node *curr = s1.top();
		s1.pop();
		s2.push(curr);
		
		if(curr->left)
			s1.push(curr->left);
		if(curr->right)
			s1.push(curr->right);
	}
	while(s2.empty()==false)
	{
		node *temp = s2.top();
		cout<<temp->key<<"\t";
		s2.pop();
		
	}
}
*/

int postorder(node *root)
{
	stack< node *> s;
	node *curr = root;
	while(curr!=NULL || s.empty()==false)
	{
		if(curr!=NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		else
		{
			node *temp = s.top()->right;
			if(temp==NULL)
			{
				temp=s.top();
				s.pop();
				cout<<temp->key<<"\t";
				while(s.empty()==false && temp==s.top()->right)
				{
					temp = s.top();
					s.pop();
					cout<<temp->key<<"\t";
				}
			}
			else
			{
				curr = temp;
			}
		}
	}
}




/* naive
int preorder(node *root)
{
	stack<node*> s;
	s.push(root);
	while(s.empty()==false)
	{
		 node *curr = s.top();
		 cout<<curr->key<<"\t";
		 s.pop();
		 if(curr->right!=NULL)
		 	s.push(curr->right);
		 if(curr->left!=NULL)
		 	s.push(curr->left);
	}
}

*/

int preorder(node *root)
{
	stack<node *> s;
	node *curr = root;
	while(curr!=NULL || s.empty()==false)
	{
		while(curr!=NULL)
		{
			cout<<curr->key<<"\t";
			if(curr->right!=NULL)
				s.push(curr->right);
			curr = curr->left;
		}
		if(s.empty()==false)
		{
		curr = s.top();
		s.pop();
		}


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