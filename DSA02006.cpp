#include<bits/stdc++.h>
using namespace std;

int a[100];
int vs[100];
int n,k;
vector<int> temp;
vector<vector<int>> ans;
int sum=0;
void in()
{
	cout << "[";
	for(auto i:temp) cout << i<<" ";
	cout << "]"<<endl;
}


void Try(int x)
{
	for(int i=x;i<n;i++)
	{
		if(vs[i]==0)
		{
			sum+=a[i];
			vs[i]=1;
			if(sum==k)
			{
				temp.clear();
				for(int i=0;i<n;i++) if(vs[i]) temp.push_back(a[i]);
				ans.push_back(temp);
			} 
			else 
			{
				Try(i+1);
			}
			sum-=a[i];
			vs[i]=0;
		}
		
	}
}



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(vs,0,sizeof(vs));
		cin >> n >> k;
		for(int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		ans.clear();
		Try(0);
		if(ans.size()==0) cout << "-1";
		else
		{
			sort(ans.begin(),ans.end());
			for(int i=0;i<ans.size();i++)
			{
				cout<< "[";
				for(int j=0;j<ans[i].size()-1;j++ ) cout << ans[i][j]<<" ";
				cout<<ans[i][ans[i].size()-1]; 
				cout << "] ";
			}
		
		}
		cout << endl;
	}
 	return 0;
}
