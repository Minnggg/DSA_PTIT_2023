#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int q;
		cin >> q;
		queue<int> Q;
		while(q--)
		{
			int x;
			cin >> x;
			if(x==1)
			{
				cout << Q.size()<<endl;
			}
			else if(x==2)
			{
				if(Q.size()==0) cout <<"YES\n";
				else cout << "NO\n";
			}
			else if(x==3)
			{
				int z;
				cin >> z;
				Q.push(z);
			}
			else if(x==4)
			{
				if(Q.size()==0) continue;
				else Q.pop();
			}
			else if(x==5)
			{
				if(Q.size()==0) cout<<"-1"<<endl;
				else cout <<Q.front()<<endl;;
			}
			else 
			{
				if(Q.size()==0) cout<<"-1"<<endl;
				else cout <<Q.back() << endl;
			}
		}
	}
 	return 0;
}
