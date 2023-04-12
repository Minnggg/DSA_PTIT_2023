#include<bits/stdc++.h>
using namespace std;


 // quay dau ')' khi chua co '(' va dem so '(' con du roi lay tong chia 2 cong vao ans
int calc(string s)
{
	int dem = 0 ; 
	stack<char> st; 
	int dem1 = 0 ; 
	int ans = 0 ; 
	if(s[0]==')')
	{ 
		s[0] = '('; ans++; 
	} 
	if(s[s.size()-1]=='(')
	{ 
		s[s.size()-1] = ')'; ans++;
	} 
	for(int i = 0 ; i < s.size(); i++)
	{ 
		if(s[i] == '(') st.push(s[i]); 
		else
		{ 
			if(!st.empty())
			{ 	
				st.pop(); 
			}
			else
			{ 
				st.push('('); ans++; 
			} 
		} 
	} 
	while(!st.empty())
	{ 
		dem1 ++; st.pop(); 
	} 
	ans += dem1/2; 
	return ans;
}




int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		cout << calc(s)<<endl; 
	}
 	return 0;
}
