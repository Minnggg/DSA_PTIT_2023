#include <bits/stdc++.h>

using namespace std;

int a[1005];

int check(int n)
{
    for (int i=0; i<n-1; i++)
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
    for (int i=0; i<n; i++)
    {
        if (check(n)==0)
            break;
        for (int j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
                swap(a[i], a[j]);
        }
        cout << "Buoc " << i+1 << ": ";
        for (int j=0; j<n; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
}