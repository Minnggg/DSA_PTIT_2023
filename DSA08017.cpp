#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		queue<string>Q;
		Q.push("6");
		Q.push("8");
		vector<long long> kq;
		while(1)
		{
			string s=Q.front();
			long long z=stoll(s);
			kq.push_back(z);
			Q.pop();
			if(s.length()<=n-1) 
			{
				Q.push(s+"6");
				Q.push(s+"8");
			}
			else break;
		}
		while(Q.size())
		{
			kq.push_back(stoll(Q.front()));
			Q.pop();
		}
		sort(kq.begin(),kq.end(),greater<long long>());
		
		for(auto a:kq) cout << a<<" ";
		cout << endl;
		
	}
 	return 0;
}
