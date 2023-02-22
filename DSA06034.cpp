#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		long long ans=0;
 		long long n,k;
		cin >> n>>k;
		map<long long ,long long> mp;
		long long x;
		cin >> x;
		mp.insert({x,1});
		for(int i=0;i<n-1;i++)
		{
			cin >> x;
			if(mp.count(x) !=0)
			{
				mp[x]++;
			}
			else
			{
				mp.insert({x,1});
			}
		}
		for(auto a : mp)
		{
			if(mp.count(k-a.first)!=0) 
			{
				
				if(k==2*a.first)
				{
					ans+=a.second*(a.second-1);
				}
				else
				{
					ans+=a.second*mp[k-a.first];
				}
			}
		}
		
		cout << ans/2 << endl;
	}
}
		 
                 