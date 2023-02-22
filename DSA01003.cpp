#include<bits/stdc++.h>
using namespace std;

int n;
int a[1000+2];

void sinh()
{
	int idx=n-1;
	while(idx>=1&&a[idx]>a[idx+1]) idx--;
	int j=n;
	while(a[j]<a[idx]) j--;
	swap(a[idx],a[j]);
	if(idx==0) 
	{
		for(int i=1;i<=n;i++) cout << i << " ";
	}
	else
	{
		int l=idx+1;
		int r=j;
		while(l<r) 
		{
			swap(a[l],a[r]);
			l++;r--;
		}
		for(int i=1;i<=n;i++) cout << a[i] << " ";
	}
	
	
	
	
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=1;i<=n;i++) cin >> a[i];
		sinh();
		cout << endl;
	}
}