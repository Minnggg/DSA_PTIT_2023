#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y;
		cin >> x >> y;
		double a[x+2],b[y+2];
		for(int i=0;i<x;i++) cin >> a[i];
		for(int i=0;i<y;i++) cin >> b[i];
		int cnt=0;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				double m=a[i];
				double n=b[j];
				if(n*log(m)>m*log(n)) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
