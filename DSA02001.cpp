#include<bits/stdc++.h>
using namespace std;


void Try(vector<int>a)
{
	if(a.size()!=1) 
	{
		cout << "[";
		for(int i=0;i<a.size()-1;i++) cout << a[i]<<" ";
		cout << a[a.size()-1]<<"]"<<endl;
		vector<int>temp;
		for(int i=0;i<a.size()-1;i++)
		{
			int x=a[i]+a[i+1];
			temp.push_back(x);
		}
		Try(temp);
	}
	else
	{
		cout << "["<<a[0]<<"]"<<endl;
		return;
	}
}






int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> a;
		for(int i=0;i<n;i++) 
		{
			int x;
			cin >> x;
			a.push_back(x);
		}
		Try(a);
		
	}
	return 0;
}