#include<iostream>
#include<string>

using namespace std;

string vietthuong(string s) 
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]);
	return s; 
}
string viethoa(string s)
{
	for(int i=0;i<s.size();i++)
		s[i]=toupper(s[i]);
	return s; 
}
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
	string s;
	cin>>s;
	string s1=latnguoc(s);
	string s2=vietthuong(s);
	string s3=viethoa(s);
	cout<<s1<<endl<<s2<<endl<<s3;
	return 0; 
}
