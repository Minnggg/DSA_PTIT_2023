#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a[500];
        cin >> n >> k;
        int idx = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] > a[i-1])
                idx = i;
        }
        if (idx == 0)
        
        
    }
}