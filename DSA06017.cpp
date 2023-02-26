#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> m >> n;
		int a[m+2];
		int b[n+2];
		for(int i=0;i<m;i++) cin >> a[i];
		for(int i=0;i<n;i++) cin >> b[i];
		int i=0,j=0;
		sort(a,a+m);
		sort(b,b+n);
		while(i<m&&j<n)
		{
			if(a[i]<=b[j])
			{
				cout << a[i] << ' ';
				i++;
			}
			else
			{
				cout << b[j] << ' ';
				j++;
			}
		}
		while(j<n)
		{
			cout << b[j] << ' ';
			j++;	
		} 
		while (i<m) 
		{
			cout << a[i] << ' ';
			i++;
		}
		cout << endl;
		
	}
 	return 0;
}
