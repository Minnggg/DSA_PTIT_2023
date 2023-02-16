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
        vector<int> a(n);
        int b[10005]={0};
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        int cnt = 0;
        for (int i=0; i<n; i++)
        {
            if (b[k-a[i]]!=0 && k-a[i]>=0)
            {
                if (k-a[i]==a[i])
                    cnt += ((b[k-a[i]]-1)+1)*(b[k-a[i]]-1)/2;
                else
                    cnt += b[k-a[i]]*b[a[i]];
                b[k-a[i]]=0;
                b[a[i]]=0;
            }
        }
        cout << cnt << endl;
    }
}