#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	t=1;
	while(t--)
	{
		int q;
		cin >> q;
		queue<int> Q;
		while(q--)
		{
			string x;
			cin >> x;
			if(x=="PUSH")
			{
				int z;
				cin >> z;
				Q.push(z);
			}
			else if(x=="PRINTFRONT")
			{
				if(Q.size()==0) cout << "NONE\n";
				else cout<<Q.front()<<endl;
			}
			else
			{
				if(Q.size()==0) continue;
				else Q.pop();
			}
			
		}
	}
 	return 0;
}
