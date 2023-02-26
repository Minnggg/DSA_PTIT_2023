#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
set<string> s;
// 0 : H
// 1 : A

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=0;
}
 int check()
 {
 	if(a[1]==1) return 0;
 	if(a[n]==0) return 0;
 	for(int i=1;i<=n-1;i++) if(a[i]==0&&a[i+1]==0) return 0;
 	return 1;
 }
 
 void in()
 {
 	if(check())
 	{
 		string temp="";
 		for(int i=1;i<=n;i++)
		{
			if(a[i]==0) temp+="H";
			else temp+="A"; 	
		}
		s.insert(temp);
	}
 }
 
 
 void sinh()
 {
 	in();
 	int i=n;
 	while(i>=1&&a[i]==1)
 	{
 		a[i]=0;
		i--;	
	}
	a[i]=1;
	if(i==0) return;
	sinh();
 }




int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		khoitao();
		sinh();
		for(auto x:s) cout << x << endl;
		s.clear();
	}
 	return 0;
}
