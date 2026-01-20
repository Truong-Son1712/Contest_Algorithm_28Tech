#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++)
		sum+=s[i]-'0'; 
	bool check=true;
	if(sum%3!=0) check=false;
	if((s[s.size()-1]-'0')%2!=0) check= false;
	if(check) cout<<"YES";
	else cout<<"NO"; 
	return 0; 
}
