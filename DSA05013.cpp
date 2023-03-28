#include<bits/stdc++.h>
using namespace std;
int n,k;
long long ans[1000000];
long long mod=1e9+7;
void qhd()
{
	ans[0]=1;
	ans[1]=1;
	for(int i=2;i<=n;i++) 
	{
		ans[i]=0;
		for(int j=1;j<=min(i,k);j++) ans[i]=(ans[i]+ans[i-j])%mod;
	}
}



int main()
{
	
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		qhd();
		cout << ans[n] << endl;
	}
 	return 0;
}
