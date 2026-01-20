#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() 
{
	string s1,s2; cin>>s1>>s2;
	set<char> se1,giao,hop;
	for(int i=0;i<s1.size();i++) {
		se1.insert(s1[i]); 
		hop.insert(s1[i]);
	}
	for(int i=0;i<s2.size();i++){
		if(se1.count(s2[i])) giao.insert(s2[i]);
		hop.insert(s2[i]); 
	} 
	for(auto x:giao) cout<<x;
	cout<<endl; 
	for(auto x:hop) cout<<x;
	return 0; 
}
 
