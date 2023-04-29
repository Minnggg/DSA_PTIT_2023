#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+2][n+2];
	vector<int> v[n+3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) 
		{
			cin >> a[i][j];
			if(a[i][j]==1) 
			{
				v[i+1].push_back(j+1);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(auto j : v[i]) cout << j << " ";
		cout << endl;
	}
 	return 0;
}
