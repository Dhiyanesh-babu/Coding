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

void bfs(vector<int> adj[], int v,int s)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	queue<int> q;
	q.push(s);
	visited[s] = true;
	while(q.empty()==false)
	{
		int x = q.front();
		cout<<x<<"\t";
		q.pop();
		for(int y:adj[x])
		{
			if(visited[y]==false)
			{
				visited[y] = true;
				q.push(y);
			}
		}
	}
}



int main()
{
	int v = 6;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,1,3);
	addedge(adj,3,5);
	addedge(adj,5,4);
	addedge(adj,2,4);
	addedge(adj,0,2);
	addedge(adj,5,0);
	bfs(adj,v,0);
}
