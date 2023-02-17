#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	cin >> n;
 	int a[n];
 	for(int i=0;i<n;i++) cin >> a[i];
 	for(int i=0;i<n-1;i++)
 	{
 		int minn=a[i];
 		int idx=i;
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[j]<minn)
 			{
 				minn=a[j];
				idx=j;	
			}
		}
		int check=1;
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1]) check=0;
		}
		cout<< "Buoc "<<i+1<<": ";
		swap(a[i],a[idx]);
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout << endl;
		if(check==1) break;
	}
}
