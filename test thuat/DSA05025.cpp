#include<bits/stdc++.h>
using namespace std;
int n;
long long ans[52];

void qhd()
{
	ans[0]=1;
	ans[1]=1;
	ans[2]=2;
	ans[3]=4;
	for(int i=4;i<=50;i++) ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
}



int main()
{
	qhd();
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << ans[n] << endl;
	}
 	return 0;
}
