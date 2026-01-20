#include<iostream>
#include<string>
#include<map> 

using namespace std;

int main() 
{
	string s; cin>>s;
	map<char,int>mp;
	for(int i=0;i<s.size();i++) mp[s[i]]++;
	long long dem=0;
	dem+=s.size(); 
	for(auto x:mp){
		if(x.second>1) dem+=((long long)x.second*(x.second-1))/2; 
	} 
	cout<<dem;
	return 0; 
}
