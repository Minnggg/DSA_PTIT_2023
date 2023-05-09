#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int ans=0;
		cin >> n;
		priority_queue<int,vector<int>,greater<int>> prq;
		while(n--)
		{
			int x;
			cin >> x;
			prq.push(x);
		}
		while(prq.size()>1) 
		{
			int temp=prq.top();
			prq.pop();
			temp+=prq.top();
			prq.pop();
			ans=ans+temp;
			prq.push(temp);
		}
		cout << ans <<endl;
	}
 	return 0;
}

//2 3 4 6  0
//4 5 6  5
//9 6  14
//15  29