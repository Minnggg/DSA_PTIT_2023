#include<bits/stdc++.h>
using namespace std;

void BFS(int u,vector<int>ke[],int vs[])
{
	cout << u <<" ";
	vs[u]=1;
	for(auto x : ke[u])
	{
		if(vs[x]==0) BFS(x,ke,vs);
	}
	return ;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int V,E,u;
		cin >> V >> E >> u;
		int vs[V+5]={};
		vector<int> ke[V+5];
		for(int i=1;i<=E;i++) 
		{
			int x,y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(u,ke,vs);
		cout << endl;
	}
 	return 0;
}
