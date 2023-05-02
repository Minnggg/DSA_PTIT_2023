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
		stack<int> num;
		stack<string> st;
		string temp="";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='0'&&s[i]<='9') temp+=s[i];
			if(s[i]=='[')
			{
			 i++;
				
				temp="";
				while(s[i]!=']')
				{
					temp+=s[i];
					i++;       
				}
				st.push(temp);
				temp="";
			}
		}
		while(!num.empty())
		{
			int res=num.top();
			num.pop();
			string temp=st.top();
			st.pop();
			for(int i=1;i<res;i++)
			{
				temp+=temp;
			}
			st.push(temp);
		}
		cout << st.top()<<endl;
	}
}