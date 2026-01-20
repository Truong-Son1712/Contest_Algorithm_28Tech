#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() 
{
	string s; cin>>s;
	set<char> se;
	for(int i=0;i<s.size();i++){
		if(se.count(s[i])==0){
			se.insert(s[i]); 
		} else {
			cout<<s[i];
			break; 
		} 
	} 
	if(se.size()==s.size()) cout<<"NONE"; 
	return 0; 
}
