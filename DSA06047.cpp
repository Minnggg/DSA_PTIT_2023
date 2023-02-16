#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n+5];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            a[i] = a[i]*a[i];
        }
        sort(a, a+n);
        int cnt = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                long long sum = a[i]+a[j];
                if (binary_search(a, a+n, sum) && sum != 0)
                {
                    cnt++;
                    break;
                }
            }
        }
        if (cnt>0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}