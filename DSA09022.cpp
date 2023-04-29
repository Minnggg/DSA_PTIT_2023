#include<bits/stdc++.h>
using namespace std;

vector<int>ke[1005];
int vs[1005];
int V,E,u;

void nhap()
{
	for(int i=1;i<=E;i++)
	{
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
	}
}


void DFS(int u)
{
	cout << u << " ";
	vs[u]=1;
	for(auto x : ke[u]) if(vs[x]==0)DFS(x);
	return ;
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >>V>>E>>u;
		memset(vs,0,sizeof(vs));
		for(int i=0;i<=V;i++) ke[i].resize(0);
		nhap();
		DFS(u);
		cout << "\n";
	} 
 	return 0;
}
