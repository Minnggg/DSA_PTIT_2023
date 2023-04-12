#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	t=1;
	while (t--)
	{
		int a,b;
		cin >> a>>b;
		queue<string>Q;
		Q.push("4");
		Q.push("7");
		vector<long long> kq;
		while(1)
		{
			string s=Q.front();
			long long z=stoll(s);
			kq.push_back(z);
			Q.pop();
			if(z<=b) 
			{
				Q.push(s+"4");
				Q.push(s+"7");
			}
			else break;
		}
		while(Q.size())
		{
			kq.push_back(stoll(Q.front()));
			Q.pop();
		}
		int ans=0;
		for(auto k:kq) 
		{
			if(k<=b&&k>a) ans+=k;
		}
		cout << ans;
		
	}
 	return 0;
}
