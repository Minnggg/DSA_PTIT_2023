#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> st;
	int t;
	cin >>t; 
	while(t--)
	{
		string s;
		cin >> s;
		if(s=="PUSH") 
		{
			int x;
			cin >> x;
			st.push(x);
		}
		else if(s=="POP")
		{
			if(!st.empty()) st.pop();
		}
		else 
		{
			if(!st.empty()) cout << st.top()<<endl;
			else cout << "NONE" <<endl;
		}
	}
 	return 0;
}
//9
//PUSH 1
//PUSH 2
//POP
//PRINT
//PUSH 3
//PRINT
//POP
//POP
//PRINT