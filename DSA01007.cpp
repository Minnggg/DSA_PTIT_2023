#include<bits/stdc++.h>
using namespace std;

int n;
char a[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]='A';
}

void in() 
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << " ";
}

void sinh()
{
	in();
	int i=n;
	while(i>=1&&a[i]=='B') 
	{
		a[i]='A';
		i--;
	}
	a[i]='B';
	if(i==0) return;
	sinh();
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		khoitao();
		sinh();
		cout << endl;
	}
 	return 0;
}
