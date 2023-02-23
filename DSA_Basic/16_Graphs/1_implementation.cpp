#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;



void addedge(vector<int> adj[],int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);

}

void print(vector<int> adj[], int v)
{
	for(int i=0;i<v;i++)
	{
		for(int x:adj[i])
		{
			cout<<x<<"\t";
		}
		cout<<"\n";
	}
}



int main()
{
	int v = 4;
	vector<int> adj[v];
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	addedge(adj,1,3);
	print(adj,v);
}

/* adjacence matrix

int main()
{
    // n is the number of vertices
    // m is the number of edges
    int n, m;
    cin >> n >> m;
    int adjMat[n + 1][n + 1];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
 
    return 0;
}

*/