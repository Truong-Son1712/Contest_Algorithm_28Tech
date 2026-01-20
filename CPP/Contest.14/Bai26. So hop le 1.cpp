#include<iostream>
#include<string>
#include<math.h> 

using namespace std;

bool check(string s) 
{
	if(abs(s[0]-s[s.size()-1])%2!=0) return false;
	for(int i=0;i<s.size()-1;i++){
		if(abs(s[i]-s[i+1])==3) return false; 
	} 
	if(s.find("28")!=string::npos) return false; 
	if(s.find("82")!=string::npos) return false;
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
