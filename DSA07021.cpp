#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int ans=0;
		stack<int>st;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(') st.push(i);
			else
			{
				if(!st.empty()&&st.size()==1)
				{
					ans=max(ans,i-st.top()+1);
					st.pop();
				}
			}
		}
		cout << ans<< endl;
	}
 	return 0;
}
