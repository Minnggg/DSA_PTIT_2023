#include<bits/stdc++.h>
using namespace std;

int vs[1005];
int n;
vector<int> ke[1005];
int V,E;
int ans;
void nhap()
{
	ans=0;
	memset(vs,0,sizeof(vs));
	for(int i=1;i<=V;i++) ke[i].clear();
	cin >> V >> E;
	for(int i=1;i<=E;i++)
	{
		int x,y;
		cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

void DFS(int u)
{
	if(vs[u]==0)
	{
		vs[u]=1;
		for(auto x:ke[u]) DFS(x);
	}
	return;
}




int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		nhap();
		for(int i=1;i<=V;i++)
		{
			if(vs[i]==0)
			{
				DFS(i);
				ans++;
			}
		}
		cout << ans << endl;	}
 	return 0;
}
