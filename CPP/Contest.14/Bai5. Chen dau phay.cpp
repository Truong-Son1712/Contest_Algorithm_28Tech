#include<iostream>
#include<string>

using namespace std;

string latnguoc(string s) 
{
	string s1;
	for(int i=s.size()-1;i>=0;i--){
		s1+=s[i]; 
	} 
	return s1; 
}
int main() 
{
	string s; cin>>s;
	string s1;
	for(int i=0;i<s.size();i++){
		s1+=s[s.size()-1-i];
		if((i+1)%3==0&&(i+1!=s.size())) s1+=','; 
	} 
	string s2=latnguoc(s1);
	cout<<s2;
	return 0; 
}
