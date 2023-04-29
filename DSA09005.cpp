#include<bits/stdc++.h>
using namespace std;

void BFS(int u,vector<int>ke[],int vs[],queue<int>q)
{
	q.push(u);
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		if(vs[temp]==0 )cout << temp <<" ";
		vs[temp]=1;
		for(auto x : ke[temp])
		{
			if(vs[x]==0) 
			{
				q.push(x);
			}
		}
	}
	return;
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
		queue<int> q;
		for(int i=1;i<=E;i++) 
		{
			int x,y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(u,ke,vs,q);
		cout << endl;
	}
 	return 0;
}
