#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> s(n);
        for (int i=0; i<n; i++)
            cin >> s[i];
        sort(s.begin(), s.end());
        if (s[0] == s[n-1])
            cout << "-1\n";
        else
        {
            cout << s[0] << ' ' << s[1] << endl;
        }
    }
}