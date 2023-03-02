#include<bits/stdc++.h>
using namespace std;
int a[1000000+2]={};


void merge(int a[],int l,int m,int r)
{
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i=0,j=0;
	while(i<x.size() && j<y.size())
	{
		if(x[i]<=y[j])
		{
			a[l]=x[i]; ++l;++i;
		}
		else
		{
			a[l]=y[j];++l;++j;
		}
	}
	while(i<x.size()) 
	{
		a[l]=x[i];
		++l;
		++i;
	}
	while(j<y.size()) 
	{
		a[l]=y[j];
		++l;
		++j;
	}
}

void mersort(int a[],int l, int r)
{
	if(l>=r) return;
	int m=(l+r)/2;
	mersort(a,l,m);
	mersort(a,m+1,r);
	merge(a,l,m,r);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];
		mersort(a,0,n-1);
		for(int i=0;i<n;i++) cout << a[i] << " ";
		cout << endl;
	}
 	return 0;
}
