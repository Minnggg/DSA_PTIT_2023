#include<bits/stdc++.h>
using namespace std;

set<string> s;
vector<string> src;
vector<string> ans;
int n,k;
int a[100];

void khoitao()
{
	for(int i=1;i<=k;i++) a[i]=i;
}

void sinh()
{
	string temp="";
	for(int i=1;i<=k;i++)
	{
		temp+=src[a[i]-1];
		temp+=" ";
	} 
	ans.push_back(temp);
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0) return;
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	sinh();
}
int main()
{
	cin >> n >> k;
	khoitao();
	while(n--)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}
	
	for(auto x : s)
	{
		src.push_back(x);
	}
	n=src.size();
	sinh();
	sort(ans.begin(),ans.end());
	for(auto x: ans)
	{
		cout << x << endl;
	}
 	return 0;
}
