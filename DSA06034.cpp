#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		long long n,k;
		cin >> n>>k;
		long long a[n+2];
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int ans=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>k) break;
			for(int j=i+1;j<n;j++)
			{
				if(a[i]+a[j]==k) ans++;
				else if(a[i]+a[j]>k) break;
			}
		}	
		cout << ans << endl;
	}
}
