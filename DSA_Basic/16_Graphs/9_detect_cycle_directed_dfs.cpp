#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;





void addedge(vector<int> adj[], int u, int v, int indegree[])
{
	adj[u].push_back(v);
	indegree[v]++;
}




int topo_sort(vector<int> adj[], int indegree[], int v)
{
	bool visited[v];
	int count=0;
	for(int i=0;i<v;i++)
	{
		visited[i] = false;
	}	
	queue<int> q;
	for(int i=0;i<v;i++)
	{
		if(indegree[i]==0)
		{
			q.push(i);
		}
	}
	while(q.empty()==false)
	{
		int x = q.front();
		q.pop();
		count++;
		visited[x]=true;
		//cout<<x<<"\t";
		for(int a: adj[x])
		{
			indegree[a]--;
			if(indegree[a]==0)
			{
				q.push(a);
			}
		}

	}
	return count;
}


/* nocycle
int main()
{
	int v=8;
	int indegree[v];
	for(int i=0;i<v;i++)
	{
		indegree[i] = 0;
	}
	vector<int> adj[v];
 	addedge(adj,0,2,indegree);
 	addedge(adj,0,3,indegree);
 	addedge(adj,1,3,indegree);
 	addedge(adj,1,4,indegree);
 	addedge(adj,4,5,indegree);
 	addedge(adj,3,7,indegree);
 	addedge(adj,7,6,indegree);
 	if(topo_sort(adj,indegree,v)==v)
 	{
 		cout<<"no cycle";
 	}
 	else
 	{
 		cout<<"cycle";
 	}

}
*/
int main()
{
	int v=5;
	int indegree[v];
	for(int i=0;i<v;i++)
	{
		indegree[i] = 0;
	}
	vector<int> adj[v];
 	addedge(adj,0,1,indegree);
 	addedge(adj,1,2,indegree);
 	addedge(adj,2,3,indegree);
 	addedge(adj,3,1,indegree);
 	addedge(adj,4,1,indegree);
 	if(topo_sort(adj,indegree,v)==v)
 	{
 		cout<<"no cycle";
 	}
 	else
 	{
 		cout<<"cycle";
 	}

}