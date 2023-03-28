#include<bits/stdc++.h>
using namespace std;
string s[100+2];
int n,a[100],idx;

vector<string> ans;

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=i;
}
void check()
{
	if(a[n]==idx) 
	{
		string temp=s[a[1]];
		for(int i=2;i<=n;i++)
		{
			temp=temp+" "+s[a[i]];
		}
		ans.push_back(temp);
	}
	
}
void sinh()
{
	check();
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]) i--;
	if(i==0) return;
	else
	{
		int idx=n;
		while(a[idx]<a[i]) idx--;
		swap(a[i],a[idx]);
		int l=i+1;
		int r=n;
		while(l<r)
		{
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	sinh();
}
int main()
{
	cin >> n;
	
	for(int i=1;i<=n;i++) 
	{
		string temp;
		cin >> temp;
		s[i]=temp;
	}
	string k;
	cin >> k;
	for(int i=1;i<=n;i++)
	{
		if(s[i]==k) idx=i;
	}
	khoitao();
	sinh();	
	sort(ans.begin(),ans.end());
	for(auto x: ans)
	{
		cout << x <<endl;
	}
 	return 0;
}
