#include<bits/stdc++.h>
using namespace std;

long long minn(string s1,string s2)
{
	for(int i=0;i<s1.length();i++) if(s1[i]=='6') s1[i]='5';
	for(int i=0;i<s2.length();i++) if(s2[i]=='6') s2[i]='5';
	return stol(s1)+stol(s2);
}

long long maxx(string s1,string s2)
{
	for(int i=0;i<s1.length();i++) if(s1[i]=='5') s1[i]='6';
	for(int i=0;i<s2.length();i++) if(s2[i]=='5') s2[i]='6';
	return stol(s1)+stol(s2);
}





int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	cout << minn(s1,s2) <<" "<<maxx(s1,s2);
 	return 0;
}
