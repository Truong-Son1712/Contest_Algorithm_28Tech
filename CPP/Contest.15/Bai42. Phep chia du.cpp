#include<iostream>
#include<string>

using namespace std;

long long chiadu(string s,long long m) 
{
	long long mod=0;
	for(int i=0;i<s.size();i++)
		mod=(mod*10+(s[i]-'0'))%m;
	return mod; 
}
int main() 
{
	string s; cin>>s;
	long long m; cin>>m;
	long long du=chiadu(s,m);
	cout<<du; 
	return 0; 
}
