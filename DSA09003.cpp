#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int V,E;
		cin >> V>>E;
		vector<int>v[V+5];
		for(int i=1;i<=E;i++)
		{
			int x,y;
			cin >> x >> y;
			v[x].push_back(y);
		}
		for(int i=1;i<=V;i++)
		{
			cout << i <<": ";
			sort(v[i].begin(),v[i].end());
			for(auto x:v[i])
			{
				cout << x << " ";
			}
			cout << endl;
		}
		
	}
 	return 0;
}
