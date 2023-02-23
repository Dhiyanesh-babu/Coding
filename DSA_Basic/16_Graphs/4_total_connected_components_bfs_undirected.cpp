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

void bfs(vector<int> adj[], int s, bool visited[])
{

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
int count(vector<int> adj[], int v)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	int count  = 0;
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		{
			bfs(adj,i,visited);
			count++;
		}
	}
	return count;
}


int main()
{
	int v = 9;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,2,1);
	addedge(adj,0,2);
	addedge(adj,3,4);
	addedge(adj,5,6);
	addedge(adj,5,7);
	addedge(adj,7,8);

	cout<<count(adj,v);
}
