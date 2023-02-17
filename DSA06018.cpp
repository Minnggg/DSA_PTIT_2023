#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[100000]={};
		int minn=1e9,maxx=-1e9;
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			a[x]++;
			minn=min(x,minn);
			maxx=max(x,maxx);
		}
		int ans=0;
		for(int i=minn;i<=maxx;i++)
		{
			if(a[i]==0) ans ++;
		}
		cout << ans<<endl;
	} 	
}
