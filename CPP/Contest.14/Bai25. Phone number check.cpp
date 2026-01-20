#include<iostream>
#include<string>

using namespace std;

bool check(string s) 
{
	if(s.size()>11||s.size()<10) return false;
	if(s[0]!='0') return false;
	for(int i=0;i<s.size();i++){
		if(s[i]<'0'||s[i]>'9') return false; 
	}  
	return true; 
}
int main() 
{
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		if(check(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl; 
	} 
	return 0; 
}
