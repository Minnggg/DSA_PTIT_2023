#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;



void in(vector<int>a)
{
	if(a.size()==1) cout << "["<<a[0]<<"] ";
	else
	{
		cout << "[";
		for(int i=0;i<a.size()-1;i++) cout << a[i]<<" ";
		cout << a[a.size()-1]<<"] ";
	}

}

void Try(vector<int>a)
{
	if(a.size()!=1) 
	{
		ans.push_back(a);
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
		ans.push_back(a);
		return;
	}
}






int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    ans.clear();
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
		for(int j=ans.size()-1;j>=0;j--)
		{
			in(ans[j]);
		}
		cout << endl;
	}
	return 0;
}