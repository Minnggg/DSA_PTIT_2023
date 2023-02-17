#include<bits/stdc++.h>
using namespace std;

int main()
{
 	int n;
 	cin >> n;
 	int a[n];
 	for(int i=0;i<n;i++) cin >> a[i];
 	int cnt=1;
 	// hàm sắp xếp nổi bọt (bubble sort)
    for(int i=0;i<n-1;i++)
    {
    	
    	for(int j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
		int check=1;
		for(int j=0;j<n-1;j++) 
		{
			for(int k=j+1;k<n;k++) 
			{
				if(a[j]>a[k]) check=0;			}
		}
		cout<<"Buoc "<< i+1<<": ";
		for(int j=0;j<n;j++) cout << a[j] <<" ";
		cout <<endl;
		
		if(check==1)
		{
			break;
		}
		
		
	}
}
