#include<bits/stdc++.h>
using namespace std;

int main()
{
	deque<int> q;
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(s=="PUSHFRONT")
		{
			int x; cin >> x;
			q.push_front(x);
		}
		else if(s=="PRINTFRONT")
		{
			if(!q.empty()) cout << q.front()<<endl;
			else cout << "NONE\n";
		}
		else if(s=="POPFRONT")
		{
			if(!q.empty()) q.pop_front();
		}
		else if(s=="PUSHBACK")
		{
			int x; cin >> x;
			q.push_back(x);
		}
		else if(s=="PRINTBACK")
		{
			if(!q.empty()) cout << q.back()<<endl;
			else cout << "NONE\n";
		}
		else if(s=="POPBACK")
		{
			if(!q.empty()) q.pop_back();
		}
	}
 	return 0;
}
//10
//PUSHBACK 1
//PUSHFRONT 2
//PUSHBACK 3
//PRINTFRONT
//POPFRONT
//PRINTFRONT
//POPFRONT
//PRINTBACK
//POPFRONT
//PRINTBACK