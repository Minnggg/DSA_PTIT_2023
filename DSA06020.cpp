#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		int n,k;
 		cin >> n>>k;
 		int check=-1;
 		int a[n+2];
 		for(int i=0;i<n;i++) 
 		{
 			cin >> a[i];
 			if(a[i]==k) 
 			{
 				check=1;
				break;	
			}
		}
		cout<<check<<endl;
	 }
}
