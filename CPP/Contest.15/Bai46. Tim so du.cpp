#include<iostream>
#include<string>

using namespace std;

long long chiadu(string s,long long m) 
{
	long long mod=0;
	for(int i=0;i<s.size();i++){
		mod=mod*10+(s[i]-'0');
		mod=mod%m;
	}
	return mod; 
}
int main() 
{
	string s;cin>>s;
	int mod1=1;
	int mod2,mod3,mod4; 
	if(chiadu(s,4)==0){
		mod2=1; mod3=1; 
	} 
	else if(chiadu(s,4)==1){
		mod2=2; mod3=3; 
	} 
	else if(chiadu(s,4)==2){
		mod2=4; mod3=4 ;
	} 
	else if(chiadu(s,4)==3){
		mod2=3; mod3=2; 
	} 
	if((s[s.size()-1]-'0')%2==0) mod4=1;
	else mod4=4;
	int res=(mod1+mod2+mod3+mod4)%5;
	cout<<res;
	return 0; 
}
