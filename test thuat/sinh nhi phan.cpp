#include<bits/stdc++.h>

using namespace std;

int n,a[100],final;

void khoitao()
{
	for(int i=1;i<=n;i++) a[i]=0;
}

void in()
{
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
}

void sinh()
{
	in();
	int idx=n;
	while(a[idx]==1&&idx>=1)
	{
		a[idx]=0;
		idx--;
	}
	if(idx==0) return;
	else a[idx]=1;
	sinh();
}


int main ()
{
	cin >> n;
	khoitao();
	sinh();
}