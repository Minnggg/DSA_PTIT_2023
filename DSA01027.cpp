#include<bits/stdc++.h>
using namespace std;

int n;
int a[100+2];
int b[100+2];

void khoitao()
{
	for(int i=1;i<=n;i++) b[i]=i;
}

void in()
{
	for(int i=1;i<=n;i++) cout << a[b[i]]<<" ";
	cout << endl;
}

void sinh()
{
	in();
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]) i--;
	if(i==0) return;
	int j=n;
	while(a[j]<a[i]) j--;
	swap(a[i],a[j]);
	int l=i+1;
	int r=n;
	while(l<r) 
	{
		swap(a[l],a[r]);
		l++;
		r--;
	}
	sinh();
}




int main()
{
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+1+n);
	khoitao();
	sinh();
 	return 0;
}
