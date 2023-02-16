#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		pair<int,int> a[n+2];
		for(int i=0;i<n;i++)
		{
			cin >> a[i].second;
			a[i].first=abs(x-a[i].second);	
		}	
		stable_sort(a,a+ n);
		for(int i=0;i<n;i++) cout << a[i].second << " ";
		cout<<"\n";
	} 	
}
