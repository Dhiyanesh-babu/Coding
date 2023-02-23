#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;



void addedge(vector<int> adj[],int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);

}

bool dfsrec(vector<int> adj[], int s, bool visited[], int parent)
{
	visited[s] = true;
	for(int x: adj[s])
	{
		if(visited[x] == false)
		{
			if(dfsrec(adj,x,visited,s)==true)
				return true;
		}
		else if(x!=parent)
		{
			return true;
		}
	}
	return false;
}






bool cycle(vector<int> adj[], int v)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		{
			if(dfsrec(adj,i,visited,-1)==true)
				return true;
		}
	}
	return false;
	
}



int main()
{
	int v = 7;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,3,2);
	addedge(adj,3,1);
	addedge(adj,0,4);
	addedge(adj,4,5);
	addedge(adj,1,4);
	cout<<cycle(adj,v);
}
