#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=i;
}



void in()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << " ";
}

void sinh()
{
	in();
	int idx=n-1;
	while(idx>=1&&a[idx] > a[idx+1]) idx--;
	if(idx==0) return;
	else
	{
		int j=n;
		while(a[j]<a[idx]) j--;
		swap(a[j],a[idx]);
		int l=idx+1;
		int r=j;
		while(l<r)
		{
			swap (a[l],a[r]);
			l++;r--;
		}
		
	}
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
}