#include<bits/stdc++.h>
using namespace std;
int a[100+2]={};
int n,k;

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=0;
}

void in()
{
	for(int i=1;i<=n;i++) 
		if(a[i]==0) cout <<'A';
		else cout << 'B';
	cout <<endl;
}

int checkxau(int l,int r)
{
	for(int i=l;i<=r;i++) if(a[i]==1) return 0;
	if(r+1<=n && a[r+1]==0) return 0;
	return 1;
}

int check()
{
	for(int i=1;i<=n-k+1;i++)
	{
		if(checkxau(i,i+k-1)==1 )return 1;	
	}
	return 0;
}

void sinh()
{
	if(check()) in();
	int i=n;
	while(i>=1&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i==0) return ;
	a[i]=1;
	sinh();
}



// 0 A 1 B
int main()
{
	cin >> n >> k;
	khoitao();
	sinh();
 	return 0;
}
