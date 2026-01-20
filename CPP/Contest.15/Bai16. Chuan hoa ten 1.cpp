#include<iostream>
#include<string>
#include<sstream> 
#include<vector>

using namespace std;

void chuyen2(string &s){
	if(s.size()==1) s.insert(0,"0");
} 
void chuyen(string &s) 
{
	s[0]=toupper(s[0]); 
	for(int i=1;i<s.size();i++){
		s[i]=tolower(s[i]); 
	} 
}
int main() 
{
	string s; getline(cin,s);
	string t; cin>>t;
	vector<string> v;
	stringstream ss(s);
	string world;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++) chuyen(v[i]);
	stringstream tt(t);
	vector<string> v2;
	while(getline(tt,world,'/')){
		v2.push_back(world); 
	} 
	for(int i=0;i<v2.size();i++) chuyen2(v2[i]);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	cout<<endl;
	cout<<v2[0];
	for(int i=1;i<v2.size();i++) cout<<'/'<<v2[i];
	return 0; 
	
}
