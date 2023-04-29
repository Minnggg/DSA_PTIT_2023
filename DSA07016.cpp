#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        string ans = "";
        stack<int> st;
        for(int i = 0; i <=s.size(); ++i)
        {
            st.push(i + 1);
            if (i == s.size() or s[i] == 'I')
            {
                while(!st.empty())
                {
                    stringstream ss;
                    string tmp;
                    ss << st.top();
                    ss >> tmp;
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
