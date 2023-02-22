#include<bits/stdc++.h>
using namespace std;

int a[100000+2],k,n;

int check(int x,int y,int j)
{
	if(binary_search(a+j+1,a+n,k-x-y)) return 1;
	return 0;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n>>k;
		int ans=0;
		for(int i=0;i<n;i++) cin >> a[i];
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
