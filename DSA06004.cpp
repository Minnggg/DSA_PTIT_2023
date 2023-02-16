#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x; 
        cin >> n >> m;
        set<int> s;
        int a[n+5], b[m+5];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i=0; i<m; i++)
        {
            cin >> b[i];
            s.insert(b[i]);
        }
        vector<int> v;
        for (int i=0; i<m; i++)
        {
            if (binary_search(a, a+n, b[i]))
                v.push_back(b[i]);
        }
        for (int i : s)
            cout << i << ' ';
        cout << endl;
        for (int i : v)
            cout << i << ' ';
        cout << endl;
    }
}