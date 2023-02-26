#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=n-i+1;
}

void in()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << " ";
}

void sinh()
{
	in();
	int i=n-1;
	while(i>=1&&a[i]<a[i+1]) i--;
	if(i==0) return;
	else
	{
		int j=n;
		while(j>=1&&a[j]>a[i]) j--;
		swap(a[i],a[j]);
		int l=i+1;
		int r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++;r--;
		}
		sinh();
	}
	
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
		cout << "\n";
	}
	
 	return 0;
}
