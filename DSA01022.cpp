#include<bits/stdc++.h>
using namespace std;

int n,ans;
int a[100+2];
int b[100+2];


void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=i;
}

int check()
{
	for(int i=1;i<=n;i++) if(a[i]!=b[i]) return 0;
	return 1;
}

void sinh()
{
	if(check()==1)
	{
		cout << ans <<endl;
		return;
	}
	else
	{
		int i=n-1;
		while(i>=1&&a[i]>a[i+1]) i--;
		if(i==0) return;
		int j=n;
		while(j>=1&&a[j]<a[i]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++;r--;	
		}
		ans++;
		sinh();
	}
	
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ans=1;
		cin >> n;
		for(int i=1;i<=n;i++) cin >> b[i];
		khoitao();
		sinh();
		
	}
 	return 0;
}
