#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int value[10]={1,2,5,10,20,50,100,200,500,1000};
		int n;
		cin >> n;
		int ans=0;
		for(int i=9;i>=0;i--)
		{
			while(n-value[i]>=0)
			{
				ans++;
				n-=value[i];	
			} 
		}
		cout << ans << endl;
		
	}
 	return 0;
}
