#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		int i=s.length()-1;
		while(i>=1&&s[i]=='1')
		{
			s[i]='0';
			i--;
		}
		
		if(i==0) 
		{
			for(int j=0;j<s.length();j++) cout <<'0';
			cout << endl;
		}
		else
		{
			s[i]='1';
			for(int j=0;j<s.length();j++) cout << s[j];
			cout << endl;
		}
	}
 	return 0;
}
