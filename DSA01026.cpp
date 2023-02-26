#include<bits/stdc++.h>
using namespace std;

int a[100+2];
int n;
int check()
{
	if(a[1]==6||a[n]==8) return 0;
	for(int i=1;i<=n-1;i++) if(a[i]==a[i+1]&&a[i]==8) return 0;
	for(int i=1;i<=n-3;i++) if(a[i]==a[i+1]&&a[i+1]==a[i+2]&&a[i]==a[i+3]&&a[i]==6) return 0;
	return 1;
}

void in()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
}

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=6;
}
void sinh()
{
	if(check()==1) 
	in();
	int i=n;
	while(i>=1&&a[i]==8) 
	{	
		a[i]=6;
		i--;
	}
	a[i]=8;
	if(i==0) return ;
	sinh();
}

int main()
{
	cin >> n;
	khoitao();
	sinh();
 	return 0;
}
