#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t+5];
    for (int i=0; i<t; i++)
        cin >> a[i];
    int x;
    cin >> x;
    for (int i=0; i<t; i++)
        if (a[i] != x)
            cout << a[i] << ' ';
    system("pause");
}