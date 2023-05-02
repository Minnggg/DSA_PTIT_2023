#include<bits/stdc++.h>
using namespace std;

int slove(int s, int b)
{
    int a[200001]={};
    queue<int> Q;
	Q.push(s);
	while(a[b]==0)
	{
		int temp=Q.front();
		Q.pop();
		if(temp-1>0 &&a[temp-1]==0)
		{
			a[temp-1]=a[temp]+1;
			Q.push(temp-1);
		}
		if(temp*2<200000 &&a[temp*2]==0)
		{
			a[temp*2]=a[temp]+1;
			Q.push(temp*2);
		}
	}
	return a[b];
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int s,t;
		cin >> s >> t;
		cout <<slove(s,t)<<endl;
	}
 	return 0;
}