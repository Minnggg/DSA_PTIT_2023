#include<bits/stdc++.h>
using namespace std;


int check(string s)
{
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
		else
		{
			
			if (!st.empty()&&s[i]==')'&&st.top()=='(') 
			{
				st.pop();
				continue;	
			}
			if (!st.empty()&&s[i]==']'&&st.top()=='[') 
			{
				st.pop();
				continue;		
			}
			if (!st.empty()&&s[i]=='}'&&st.top()=='{') 
			{
				st.pop();
				continue;		
			}
			return 0;
		}
		
	}
	if(st.empty()) return 1;
	return 0;
}




int main()
{
	int t;
	cin >>t ;
	while(t--)
	{
		string s;
		cin >> s;
		if(check(s)) cout << "YES\n";
		else cout <<"NO\n";
	}
 	return 0;
}
//2
//[()]{}{[()()]()}
//[(])
