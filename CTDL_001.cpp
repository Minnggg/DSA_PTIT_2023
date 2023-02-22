#include<bits/stdc++.h>
using namespace std;

int n;
int a[10000];
void khoitao()
{
	for(int i=1;i<=n;i++) a[i]==0;
}



int check()
{
	int l=1;
	int r=n;
	while(l<r)
	{
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

void in()
{
	if(check()) 
	{
		for(int i=1;i<=n;i++) cout <<a[i]<<" ";
		cout <<endl;
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
	cin >> n;
	khoitao();
	sinh();
}