#include<string>
#include<iostream>
#include<set>
 
using namespace std;

void chuyen(string &s) 
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]); 
}
int main() 
{
	string s; cin>>s;
	chuyen(s);
	set<char> se ;
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z') se.insert(s[i]); 
	} 
	if(se.size()==26) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
