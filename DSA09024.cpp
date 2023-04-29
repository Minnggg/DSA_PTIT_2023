#include<bits/stdc++.h>
using namespace std;

int V,E,u;
vector<int>ke[1005];
int vs[1005];

void nhap()
{
	for(int i=1;i<=E;i++)
	{
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}

void BFS(int u)
{
	queue<int>q;
	q.push(u);
	while(!q.empty())
	{
		int temp=q.front();
		q.pop();
		if(vs[temp]==0) cout << temp << " ";
		vs[temp]=1;
		for(auto x : ke[temp]) if(vs[x]==0) q.push(x);
	}
	return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> V >> E >> u;
		memset(vs,0,sizeof(vs));
		for(int i=0;i<=V;i++) ke[i].resize(0);
		nhap();
		BFS(u);
		cout << endl;
	}
 	return 0;
}
