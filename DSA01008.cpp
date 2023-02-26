#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=0;
}

void in()
{
	int check=0;
	for(int i=1;i<=n;i++) if(a[i]==1) check++;
	if(check==k) 
	{
		for(int i=1;i<=n;i++) cout << a[i];
		cout << "\n";
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
	if(i==0) return ;
	sinh();
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		khoitao();
		sinh();
	}
 	return 0;
}
