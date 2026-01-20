#include<iostream>
#include<string>
#include<map> 

using namespace std;

int main() 
{
	int T; cin>>T;
	string s;
	while(T--){
		cin>>s;
		map<char,int>mp; 
		for(int i=0;i<s.size();i++) mp[s[i]]++;
		int demle=0;
		for(auto x:mp)
			if(x.second %2!=0) demle++;
		if(demle>1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl; 
	} 
	return 0; 
}
