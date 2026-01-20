#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	string s; cin>>s;
	vector<char>v;
	for(int i=0;i<s.size();i++) v.push_back(s[i]);
	string s1,s2;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++) s1+=v[i];
	sort(v.begin(),v.end(),greater<char>());
	for(int i=0;i<v.size();i++) s2+=v[i];
	if(s==s1||s==s2) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
