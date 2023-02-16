#include <bits/stdc++.h>

using namespace std;

int check(int a)
{
    if (a<2)
        return 0;
    if (a<4)
        return 1;
    if (a%2==0 || a%3==0)
        return 0;
    int sqr = sqrt(a);
    for (int i=5; i<=sqr; i+=2)
    {
        if (a%i==0)
            return 0;
    } 
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n%2==0)
        {
            if (n==4)
                cout << "2 2\n";
            else
            {
                int l=1, r=n-1;
                while (check(l)==0 || check(r)==0)
                {
                    l+=2;
                    r-=2;
                }
                cout << l << ' ' << r << endl;
            }
        }
        else
        {
            if (check(n-2))
                cout << "2 " << n-2 << endl;
            else
                cout << "-1\n";
        }
    }
}