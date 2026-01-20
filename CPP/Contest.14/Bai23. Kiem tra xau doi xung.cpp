#include<iostream>
#include<string>

using namespace std;

bool doixung(string s) 
{
	string s1;
	for(int i=0;i<s.size();i++)
		s1+=s[s.size()-1-i] ;
	if(s1==s) return true;
	else return false; 
}
int main() 
{
	string s; cin>>s;
	//if(doixung(s)) cout<<"true";
	//else cout<<"false";
	cout << boolalpha<<doixung(s);
	return 0; 
}
