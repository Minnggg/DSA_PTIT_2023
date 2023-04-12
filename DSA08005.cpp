#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x;
		cin >> x;
		queue<string>Q;
		Q.push("1");
		for(int i=1;i<=x;i++)
		{
			string s=Q.front();
			Q.pop();
			cout << s<<" ";
			Q.push(s+"0");
			Q.push(s+"1");
		}
		cout <<"\n";
	}
 	return 0;
}
