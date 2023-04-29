#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int v,e;
		cin >> v >> e;
		vector<int> z[v+5];
		for(int i=1;i<=e;i++) 
		{
			int a,b;
			cin >>a>>b;
			z[a].push_back(b); 
			z[b].push_back(a);
		}
		for(int i=1;i<=v;i++)
		{
			cout << i <<": ";
			for(auto t:z[i]) 
			{
				cout << t <<" ";
			}
			cout << endl;
		}
	}
 	return 0;
}

//1
//6  9
//1  2
//1  3 
//2  3
//2  5
//3  4
//3  5
//4  5
//4  6
//5  6