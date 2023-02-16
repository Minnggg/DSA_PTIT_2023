#include <bits/stdc++.h>

using namespace std;

int a[1005];

int check(int n)
{
    for (int i=0; i<n-1; i++)
    {
        if (a[i] > a[i+1])
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    int i=0;
    while (check(n))
    {
        for (int i=0; i<n-1; i++)
            if (a[i] > a[i+1])
                swap(a[i], a[i+1]);
        cout << "Buoc " << ++i << ": ";
        for (int j=0; j<n; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
}