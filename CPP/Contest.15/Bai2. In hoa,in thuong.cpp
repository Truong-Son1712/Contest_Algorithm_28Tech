#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; getline(cin,s);
	string s1,s2;
	for(int i=0;i<s.size();i++){
		s1+=(char)toupper(s[i]);
		s2+=(char)tolower(s[i]); 
	} 
	cout<<s1<<endl<<s2;
	return 0; 
}
