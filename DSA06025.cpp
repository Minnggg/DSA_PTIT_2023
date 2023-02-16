#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+5];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            if (a[i]< a[j])
                swap(a[i], a[j]);
        }
        cout << "Buoc " << i << ": ";
        for (int j=0; j<=i; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
}