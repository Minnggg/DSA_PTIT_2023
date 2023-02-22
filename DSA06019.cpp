#include<bits/stdc++.h>
using namespace std;

int cmp(pair<int,int>a,pair<int,int> b)
{
	if(a.second!=b.second) return a.second>b.second;
	else
	{
		return a.first<b.first;
	}
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>> n;
		vector<pair<int,int>> a;
		int x;
		cin >> x;
		pair<int,int> temp;
		temp.first=x;
		temp.second=1;
		a.push_back(temp);
		int idx=1;
		for(int i=0;i<n-1;i++)
		{
			int check=0;
			cin >> x;
			for(int i=0;i<idx;i++)
			{
				if(a[i].first==x)
				{
					check=1;
					a[i].second=a[i].second+1;
				}
			}	
			if(check==0)
			{
					temp.first=x;
					temp.second=1;
					a.push_back(temp);
					idx++;
			} 
		}
		sort(a.begin(),a.end(),cmp);
		for(auto m:a)
		{
			while(m.second--) 
			cout << m.first<<" ";
		}
		cout << endl;
	} 	
}
