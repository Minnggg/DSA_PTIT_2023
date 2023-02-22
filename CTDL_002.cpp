#include<bits/stdc++.h>
using namespace std;
int ans=0;
int n,k;
int a[100];
int b[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=0;
}

void in()
{
	int sum=0;
	for(int i=1;i<=n;i++) if(a[i]==1) sum+=b[i];
	if(sum==k)
	{
		ans++;
		for(int i=1;i<=n;i++) if(a[i]==1) cout << b[i]<<" ";
		cout << endl;
	}
	
}



void sinh()
{
	in();
	int i=n;
	while(i>=1&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	a[i]=1;
	if(i==0) return;
	sinh();
}


int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++)  cin >> b[i];
	khoitao();
	sinh();
	cout << ans;
}