#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long a[n+5], b[n+5];
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<m; i++)
            cin >> b[i];
        sort(a, a+n, greater<int>());
        sort(b, b+m);
        cout << a[0]*b[0] << endl;
    }
}