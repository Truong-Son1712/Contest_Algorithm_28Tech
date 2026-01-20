#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<numeric> 

using namespace std;

bool cmp(string a,string b) 
{
	string ab=a+b;
	string ba=b+a;
	return ab>ba; 
}
bool toank(string s) 
{
	for(int i=0;i<s.size();i++)
		if(s[i]!='0')return false;
	return true; 
}

void chuyen(string &s) 
{
	if(toank(s)!=true){
		while(s[0]=='0'){
			s.erase(0,1); 
		} 
	}else{
		s="0"; 
	} 
}
int main() 
{
	string s;cin>>s;
	for(int i=0;i<s.size();i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) s[i]=' '; 
	} 
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++) chuyen(v[i]);
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++) cout<<v[i]; 
	return 0; 
}
