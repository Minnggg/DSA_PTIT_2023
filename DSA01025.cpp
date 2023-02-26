#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100+2];

void khoitao()
{
	for(int i=1;i<=k;i++) a[i]=i;	
}

void in()
{
	char x='A';
	for(int i=1;i<=k;i++) printf("%c",x+a[i]-1);
	cout << endl;
}

void sinh()
{
	in();
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) return ;
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
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
