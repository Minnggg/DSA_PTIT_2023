#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100+2];
int idx;
int b[100+2];
void khoitao()
{
	for(int i=1;i<=k;i++) a[i]=i;
}


void in()
{
	for(int i=1;i<=k;i++) cout << b[a[i]]<< " ";
	cout << endl;
}

void sinh()
{
	in();
	int i=k;
	while(i>=1&&a[i]==idx+i-k) i--;
	if(i==0) return;
	a[i]=a[i]+1;
	for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	sinh();
}


int main()
{
	cin >> n >> k;
	khoitao();
	idx=1;
	cin >> b[idx];
	idx++;
	for(int i=0;i<n-1;i++)
	{
		int temp;
		cin >> temp;
		int check = 0;
		for(int j=1;j<idx;j++) 
		{
			if(b[j]==temp) check=1;
		}
		if(check==0) 
		{
			b[idx]=temp;
			idx++;	
		} 
	}
	sort(b+1,b+idx);
	idx--;
	sinh();
 	return 0;
}
