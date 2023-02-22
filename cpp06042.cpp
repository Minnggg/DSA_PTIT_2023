#include<bits/stdc++.h>
using namespace std;

int a[1000005];
int main()
{
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		int n;
 		cin >> n;
 		memset(a,0,sizeof(a));
 		for(int i=0;i<n;i++)
 		{
 			int x;
			cin >> x;
			a[x]++; 	
		}
		int maxx=0;
		for(int i=0;i<=1000000;i++)
		{
			if(a[i]>a[maxx]) maxx=i;
		}
		if(a[maxx]>n/2) cout << maxx;
		else cout << "NO";
		cout << endl;
	 }
}
