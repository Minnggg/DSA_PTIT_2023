#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		queue<string> q;
		q.push("1");
		int ans=0;
		while(!q.empty())
		{
			long long temp = stoll(q.front());
			if(temp<=n) 
			{
				ans++;
				q.push(q.front()+"0");
				q.push(q.front()+"1");
			} else break;
			q.pop();
		}
		while(!q.empty())
		{
			long long temp = stoll(q.front());
			if(temp<=n) 
			{
				ans++;
			} else break;
			q.pop();
		}
		cout<<ans<<"\n";
	}
 	return 0;
}
