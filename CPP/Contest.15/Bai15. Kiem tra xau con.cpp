#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; getline(cin,s);
	string t; getline(cin,t);
	if(s.find(t)==string::npos) cout<<"NO";
	else cout<<"YES";
	return 0; 
}
