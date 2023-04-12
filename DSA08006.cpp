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
		Q.push("9");
		while(1)
		{
			string s=Q.front();
			Q.pop();
			int z=stoi(s);
			if(z%n==0) 
			{
				cout << s<<"\n";
				break;
			}
			else
			{
				Q.push(s+"0");
				Q.push(s+"9");
			}
		}
	}
 	return 0;
}
