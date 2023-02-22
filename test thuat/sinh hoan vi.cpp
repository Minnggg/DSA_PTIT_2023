#include<bits/stdc++.h>

using namespace std;

int n,k,a[100];

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=i;
}

void in()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
}

void sinh()
{
	in();
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]) i--;
	if(i==0) return;
	else
	{
		int idx=n;
		while(a[idx]<a[i]) idx--;
		swap(a[i],a[idx]);
		int l=i+1;
		int r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	sinh();
}


int main ()
{
	cin >> n;
	khoitao();
	sinh();
}