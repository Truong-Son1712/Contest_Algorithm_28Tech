#include<iostream>
#include<string>

using namespace std;

int chuyen(string s) 
{
	int n=0;
	for(int i=0;i<s.size();i++)
		n=n*10+s[i]-'0'; 
	return n; 
}
int main() 
{
	string s; cin>>s;
	char n1=s[s.size()-2], n2=s[s.size()-1];
	string num; num=n1;
	num+=n2;
	int so=chuyen(num);
	if(s=="0") cout<<"YES";
	else if(so%25==0) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
