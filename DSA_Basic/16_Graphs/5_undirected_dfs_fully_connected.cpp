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

void dfsrec(vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
    cout<<s<<"\t";
	for(int x: adj[s])
	{
		if(visited[x] == false)
		{
			dfsrec(adj,x,visited);
		}
	}
}






void dfs(vector<int> adj[], int v,int s)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	dfsrec(adj, s, visited);
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
	dfs(adj,v,0);
}
