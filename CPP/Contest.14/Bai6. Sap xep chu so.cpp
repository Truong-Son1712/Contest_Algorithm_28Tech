#include<iostream>
#include<string>
#include<set> 

using namespace std;

int main() 
{
	string s;cin>>s;
	multiset<char> se;
	for(int i=0;i<s.size();i++)
		if(s[i]!='0') se.insert(s[i]);
	for(auto x:se) cout<<x;
	if(se.size()==0) cout<<0; 
	return 0; 
}
