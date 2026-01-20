#include<iostream>
#include<string>

using namespace std;

bool tn(string s) 
{
	string s1;
	for(int i=0;i<s.size();i++)
		s1+=s[s.size()-1-i];
	if(s1==s) return true;
	else return false; 
}
int main() 
{
	string s; cin>>s;
	bool check=true;
	bool check6=false; 
	for(int i=0;i<s.size();i++ ){
		if(s[i]=='6') check6=true; 
	} 
	if(check6==false) check=false;
	if(tn(s)==false) check=false;
	if(check) cout<<"YES";
	else cout<<"NO";
	return 0;  
}
