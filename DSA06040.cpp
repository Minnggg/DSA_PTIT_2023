#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, x;
        cin >> n >> m >> k;
        vector<long long> v, vv, vvv;
        for (int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (int i=0; i<m; i++)
        {
            cin >> x;
            if (binary_search(v.begin(), v.end(), x))
                vv.push_back(x);
        }
        for (int i=0; i<k; i++)
        {
            cin >> x;
            if (binary_search(vv.begin(), vv.end(), x))
                vvv.push_back(x);
        }
        sort(vvv.begin(), vvv.end());
        if (vvv.size())
            for (int i : vvv)
                cout << i << ' ';
        else
            cout << "-1";
        cout << endl;
    }
}