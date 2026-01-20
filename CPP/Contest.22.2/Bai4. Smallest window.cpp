#include<iostream>
#include<string>
#include<set>
#include<map> 

using namespace std;

int main() 
{
	string s; cin>>s;
	set<char> se;
	map<char,int> mp; 
	for(int i=0;i<s.size();i++) se.insert(s[i]);
	int len=s.size(),n=se.size();
	int l=0,r,ans=1e9; 
	for(r=0;r<len;r++){
		 mp[s[r]]++; 
		if(mp.size()==n){
			while(mp.size()==n){
		 		if(mp[s[l]]==1) mp.erase(s[l]);
				else mp[s[l]]--;
				l++; 
		 	} 
		 	if(mp.size()<n) mp[s[--l]]++; 
		 	ans=min(ans,r-l+1); 
		} 
	} 
	cout<<ans;
	return 0; 
}
