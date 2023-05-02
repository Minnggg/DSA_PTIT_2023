#include <bits/stdc++.h>

using namespace std;

vector<long long> slove(vector<long long>v,vector<long long>vv,vector<long long>vvv,vector<long long>ans)
{
	for(auto x:v)
	{
		if(binary_search(vv.begin(),vv.end(),x)&&binary_search(vvv.begin(),vvv.end(),x)) ans.push_back(x);
	}
	return ans;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k, x;
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
            vv.push_back(x);
        }
        for (int i=0; i<k; i++)
        {
            cin >> x;
            vvv.push_back(x);
        }
        int idxA, idxB, idxC;
        idxA = idxB = idxC = 0;
        multiset<long long> ans;
        while(idxA < n && idxB < m && idxC < k)
        {
            if(v[idxA] == vv[idxB] && vv[idxB] == vvv[idxC])
            {
                ans.insert(v[idxA]);
                ++idxA;
                ++idxB;
                ++idxC;
            }
            else if(v[idxA] < vv[idxB]) ++idxA;
            else if(vv[idxB] < vvv[idxC]) ++idxB;
            else ++idxC;
        }
        if(ans.empty()) cout << -1;
        else for(long long i : ans) cout << i << ' ';
        cout << endl;
    }
}