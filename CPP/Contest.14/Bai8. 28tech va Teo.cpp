#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s; 
	string s1;
	for(int i=0;i<s.size();i++)
		if(s[i]!='2'&&s[i]!='8'&&s[i]!='t'&&s[i]!='e'&&s[i]!='c'&&s[i]!='h')
			s1+=s[i]; 
	if(s1.size()!=0) cout<<s1;
	else cout<<"EMPTY"; 
	return 0; 
}
