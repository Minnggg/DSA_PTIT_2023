#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[100];

int sinh()
{
	int i=k;
	int b[k+2];
	for(int j=1;j<=k;j++) b[j]=a[j];
	while(i>=1&&b[i]==n+i-k) i--;
	if(i==0) return k;
	else
	{
		b[i]=b[i]+1;
		for(int j=i+1;j<=k;j++) 
		{
			b[j]=b[j-1]+1;	
		}
		int ans=0;
		for(int j=1;j<=k;j++) if(a[j]!=b[j]) ans++;
		return ans;
	}
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
        int a[k + 1],b[k + 1], cnt = 0, idx;
        for(int i = 1;i <= k; i++)
        {
            cin >> b[i];
            a[i] = b[i];
        }
        idx = k;
        while(a[idx] == n - k + idx && idx > 0) idx--;
        if(idx < 1)
        {
            cout << k << endl;
        }
        else
        {
            a[idx]++;
            for(int j = idx + 1; j <= k; j++) a[j] = a[j - 1] + 1;
            for(int i = 1; i <= k; i++)
                for(int j = 1; j <= k; j++)
                    if(a[i] == b[j]) ++cnt;
            if(cnt == k) cnt = 0;
            cout << k - cnt << endl;
        }	
	}
 	return 0;
}
