#include<bits/stdc++.h>
using namespace std;

int V,E,u,v;
vector<int>ke[1005],ans;
int vs[1005];

void nhap()
{
	cin >> V >> E;
	
	ans.clear();
	for(int i=1;i<=V;i++) ke[i].clear();
	for(int i=1;i<=E;i++) 
	{
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

void DFS(int x)
{
	ans.push_back(x);
	vs[x]=1;
	if(x==v) return;
	for(auto z : ke[x]) if(vs[z]==0) DFS(z);
	return;
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		nhap();
		int q;
		cin >> q;
		while(q--)
		{
			cin >> u >> v;
			memset(vs,0,sizeof(vs));
			DFS(u);
			if(vs[v]==1) 
			{
				cout << "YES";
			}
			else cout << "NO";
			cout << "\n";
		}
		
	}
 	return 0;
}
