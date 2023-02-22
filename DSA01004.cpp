#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];
void khoitao()
{
	for(int i=1;i<=k;i++) a[i]=i;
}


void in()
{
	for(int i=1;i<=k;i++) cout <<a[i] ;
	cout << " ";
}


void sinh()
{
	in();
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) return;
	else
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		sinh();
	}
	
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
		cout << endl;
	}
 	return 0;
}
