#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for (int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        int cnt=0;
        for (int i=n-1; i>=0; i--)
        {
            int j=0;
            while (a[i]-a[j]>=k)
                j++;
            cnt += (i-j);
        }
        cout << cnt << endl;
    }
}