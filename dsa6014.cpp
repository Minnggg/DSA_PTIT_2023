#include<bits/stdc++.h>
using namespace std;

int a[1000005]={};

void sang()
{
	a[0]=a[1]=1;
	for(int i=2;i<=1000;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<=1000000;j+=i)
			{
				a[j]=1;
			}	
		}
		
	}
}



int main()
{
 	sang();
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		int n;
		cin >> n;
		int check=0;
		for(int i=2;i<n;i++)
		{
			if(a[i]==0&&a[n-i]==0) 
			{
				check=1;
				cout << i <<" " <<n-i<<endl;
				break;
			}
		}	
		if(check==0) cout<<"-1"<<endl;
	}
}
