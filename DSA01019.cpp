#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i=0; i<n; i++)
            s.push_back('A');
        for (int i=0; i<n; i+=2)
        {
            s[i] = 'H';
            cout << s << endl;
        }
    }
}

#include<bits/stdc++.h> 

using namespace std; 
int n; 
void check(string s)
{ 
    if(s[0]!='H') 
    return; 
    if(s[s.size()-1]!='A')
    return;
    for(int i=0;i<=s.size()-1;i++)
    {
        if(s[i]==s[i+1]&& s[i]=='H')
        return;
    }
    cout<<s<<endl; 
} 
void Try(string s)
{ 
    if(s.size()==n)
    check(s); 
    else 
    { 
        Try(s+'A');
        Try(s+'H');
    }
} 

int main()
{ 
    int t; 
    cin>>t; 
    while(t--)
    { 
        cin>>n; 
        Try(""); 
    } 
}