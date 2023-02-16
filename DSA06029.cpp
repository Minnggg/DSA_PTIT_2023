#include <bits/stdc++.h>

using namespace std;

void nhap(int a[], int n)
{
	for (int i=0; i<n; i++)
		cin >> a[i];
}

int main()
{
	int a[500], n;
	int nguoc[200][200];
	cin >> n;
	nhap(a, n);
	for (int i=0; i<n; i++)
	{
		int idx = a[i];
		int j=i-1;
		while (j>=0 && a[j] > idx)
		{
			a[j+1] = a[j];
			j--;
		}
        a[j+1] = idx;
		for (int j=0; j<n; j++)
			nguoc[i][j] = a[j];
	}
	for (int i=n-1; i>=0; i--)
	{
		cout << "Buoc " << i << ": ";
		for (int j=0; j<=i; j++)
			cout << nguoc[i][j] << ' ';
		cout << endl;
	}
}