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
        int cnt = 0;
        cnt += (n/1000);
        n = n%1000;
        cnt += (n/500);
        n = n%500;
        cnt += (n/200);
        n = n%200;
        cnt += (n/100);
        n = n%100;
        cnt += (n/50);
        n = n%50;
        cnt += (n/20);
        n = n%20;
        cnt += (n/10);
        n = n%10;
        cnt += (n/5);
        n = n%5;
        cnt += (n/2);
        n = n%2;
        cnt += n;
        cout << cnt << endl;
    }
}