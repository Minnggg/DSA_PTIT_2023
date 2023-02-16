#include <bits/stdc++.h>

using namespace std;

int a[1005];

int check(int n)
{
    for (int i=0; i<n; i++)
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
    for (int i=0; i<n-1; i++)
    {
        int m = a[i], idx = i;
        for (int j = i+1; j<n; j++)
        {
            if (a[j]<m)
            {
                m = a[j];
                idx = j;
            }
        }
        cout << "Buoc " << i+1 << ": ";
        a[idx] = a[i];
        a[i] = m;
        for (int i=0; i<n; i++)
            cout << a[i] << ' ';
        cout << endl;
        if (check(n)==0)
            break;
    }
}