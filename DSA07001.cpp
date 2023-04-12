#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	stack<int> st;
	while(cin>>s)
	{
		
		if(s=="push")
		{
			int n;
			cin >> n;
			st.push(n);
		} 
		else if(s=="pop")
		{
			if(!st.empty())
			{
				st.pop();
			}
		}
		else
		{
			if(!st.empty())
			{
				stack<int> temp;
				while(!st.empty())
				{
					temp.push(st.top());
					st.pop();
				}
				while(!temp.empty())
				{
					cout<<temp.top()<<" ";
					st.push(temp.top());
					temp.pop();
				}
			}
			else cout<<"empty";
			cout << "\n";
		}
	}
 	return 0;
}
