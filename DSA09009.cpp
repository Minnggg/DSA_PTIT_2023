#include<bits/stdc++.h>
using namespace std;

int vs[1005];
int n;
vector<int> ke[1005];
int V,E;
int ans;
queue<int> qu;
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

void BFS(int u)
{
	qu.push(u);
	while(!qu.empty())
	{
		int temp=qu.front();
		qu.pop();
		vs[temp]=1;
		for(auto x : ke[temp])
		{
			if(vs[x]==0) qu.push(x);
		}
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
				BFS(i);
				ans++;
			}
		}
		cout << ans << endl;	}
 	return 0;
}
