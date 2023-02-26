#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	int x;
	cin >> x;
	v.push_back(x);
	for(int i=1;i<n;i++) 
	{
		cin >> x;
		int check=0;
		for(auto b:v)
		{
			if(b==x) check=1;
		}
		if(check==0) v.push_back(x);
	}
	for(auto b : v) cout << b <<' ';
 	return 0;
}
