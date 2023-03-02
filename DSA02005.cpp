#include<bits/stdc++.h>
using namespace std;

string s;
int a[100];
int n;

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=i;
}

void in()
{
	
	for(int i=1;i<=n;i++) cout << s[a[i]-1];
	cout << " ";
}


void sinh()
{
	in();
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]) i--;
	if(i==0) return ;
	int idx=n;
	while(a[i]>a[idx])idx--;
	swap(a[i],a[idx]);
	int l=i+1;
	int r=n;
	while(l<r)
	{
		swap(a[l],a[r]);
		l++;r--;
	}
	sinh();
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> s;
		n=s.length();
		khoitao();
		sinh();
		cout << endl;
	}
	
 	return 0;
}
