#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;





void addedge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

void dfsrec(vector<int> adj[], bool visited[], stack<int> &st, int s)
{
	visited[s]=true;
	for(int x: adj[s])
	{
		if(visited[x]==false)
		{
			dfsrec(adj,visited,st,x);
		}
	}
	st.push(s);
}




void topo_sort_dfs(vector<int> adj[], int v)
{
	stack<int> st;
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<v;i++)
	{
		if(visited[i]==false)
		{
			dfsrec(adj,visited,st,i);
		}
	}
	while(st.empty()==false)
	{
		cout<<st.top()<<"\t";
		st.pop();
	}
}



int main()
{
	int v=5;
	vector<int> adj[v];
 	addedge(adj,0,1);
 	addedge(adj,2,3);
 	addedge(adj,1,3);
 	addedge(adj,2,4);
 	addedge(adj,3,4);
 	topo_sort_dfs(adj,v);

}