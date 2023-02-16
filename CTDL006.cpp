#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s;
    int x;
    for (int i=0; i<n; i++)
    {
        cin >> x;
        if (!binary_search(s.begin(), s.end(), x))
            s.push_back(x);
    }
    for (int i : s)
        cout << i << ' ';
}