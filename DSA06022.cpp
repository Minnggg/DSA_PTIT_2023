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
		set<int>s;
		while(n--)
		{
			int x;
			cin >> x;
			s.insert(x);
		}
		if(s.size()==1 ) cout<< -1;
		else
		{
			int cnt=0;
			for(auto x:s)
			{
				cout<< x << " ";
				cnt++;
				if(cnt==2) break;
			}
		}
		cout << endl;
	} 	
}
