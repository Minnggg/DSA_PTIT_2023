#include<bits/stdc++.h>
using namespace std;

long long a[100000+2],n;

int check(long long x,long long y,long long j)
{
	if(binary_search(a+j+1,a+n,x+y)) return 1;
	return 0;
}


int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int ans=0;
		for(int i=0;i<n;i++) 
		{
			cin >> a[i];
			a[i]=a[i]*a[i];	
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(check(a[i],a[j],j))
				{
					ans=1;
					break;	
				} 
			}
			if(ans==1) break;
		}
		if(ans==1) cout << "YES\n";
		else cout <<"NO\n";
	}
 	return 0;
}