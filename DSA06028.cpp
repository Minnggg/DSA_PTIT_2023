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
        int min = i;
		for (int j=i+1; j<n; j++)
		{
			if (a[j] < a[min])
                min = j;
		}
        int t = a[i];
        a[i] = a[min];
        a[min] = t;
		for (int j=0; j<n; j++)
			nguoc[i][j] = a[j];
	}
	for (int i=n-2; i>=0; i--)
	{
		cout << "Buoc " << i+1 << ": ";
		for (int j=0; j<n; j++)
			cout << nguoc[i][j] << ' ';
		cout << endl;
	}
}