#include<bits/stdc++.h>
using namespace std;


int check(string s)
{
	stack<int> st;
	st.push(-1);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]== '(' ) st.push(i);
		if(s[i]== ')' ) 
		{
			int j=st.top();st.pop();
			if(i-j==2) return 1;
			if(s[j+1]=='('&&s[i-1]==')') return 1;
		}
	}
	return 0;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		getline(cin ,s);
		if(check(s)==1) cout << "Yes\n";
		else cout << "No\n";
	}
}

//3
//((a+b))
//(a + (b)/c)
//(a + b*(c-d))