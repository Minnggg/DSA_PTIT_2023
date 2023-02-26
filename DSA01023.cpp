#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100+2];
int b[100+2];
int ans;

int check(int a[],int b[])
{
	for(int i=1;i<=k;i++) if(a[i]!=b[i]) return 0;
	return 1;
}

void khoitao()
{
	for(int i=1;i<=k;i++) a[i] = i;
}

void sinh()
{
	if(check(a,b)) 
	{
		cout << ans << endl;
		return ;	
	}
	
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) return ;
	else 
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
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
		cin >> n >> k;
		for(int i=1;i<=k;i++) cin >> b[i]; 
		khoitao();
		sinh();
		
	}
 	return 0;
}
