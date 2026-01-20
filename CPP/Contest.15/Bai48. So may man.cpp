#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string s; cin>>s;
	int sum=0;
	for(int i=0;i<s.size();i++)
		sum+=s[i]-'0';
	if(sum%9==0&&sum!=0) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
