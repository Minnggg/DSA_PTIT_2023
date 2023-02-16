#include <bits/stdc++.h>

using namespace std;

void nhap(int a[], int n)
{
	for (int i=0; i<n; i++)
		cin >> a[i];
}

int check(int a[], int n)
{
    for (int i=0; i<n-1; i++)
        if (a[i] > a[i+1])
            return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[500], nguoc[200][200];
        cin >> n;
        nhap(a, n);
        int k=1;
        while (check(a, n))
        {
            for (int i=0; i<n-1; i++)
                if (a[i] > a[i+1])
                {
                    int t = a[i];
                    a[i] = a[i+1];
                    a[i+1] = t;
                }
            for (int i=0; i<n; i++)
                nguoc[k][i] = a[i];
            k++;
        }
        for (int i=k-1; i>0; i--)
        {
            cout << "Buoc " << i << ": ";
            for (int j=0; j<n; j++)
                cout << nguoc[i][j] << ' ';
            cout << endl;
        }
    }
}
