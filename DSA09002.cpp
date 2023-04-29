#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t = 1, tmp;
    cin >> t;
    vector<vector<int>> v(t + 1);
    cin.ignore();
    string s;
    for(int i = 1; i <= t; ++i)
    {
        getline(cin, s);
        stringstream ss(s);
        while(ss >> s)
        {
            tmp = stoi(s);
            v[i].push_back(tmp);
        }
    }
    for(int i = 1; i <= t; ++i)
    {
        sort(v[i].begin(),v[i].end());
        for(int j : v[i]) if(j > i) cout << i << ' ' << j << endl;
    }
    return 0;
}
