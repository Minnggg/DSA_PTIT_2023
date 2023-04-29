#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n+2][n+2];
	cin.ignore();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) a[i][j]=0;
		string s;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>s)
		{
			int temp=stoi(s);
			a[i][temp]=1;
			a[temp][i]=1;
		}
		
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) cout << a[i][j] << " ";
		cout << endl;
	}
 	return 0;
}
