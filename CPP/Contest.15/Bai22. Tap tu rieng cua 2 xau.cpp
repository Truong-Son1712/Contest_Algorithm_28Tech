#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<set>

using namespace std;

void chuyen(string &s) 
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]); 
}
int main() 
{
	string s,t; getline(cin,s); getline(cin,t);
	string world;
	stringstream ss(s),tt(t);
	vector<string> vs,vt;
	while(ss>>world){
		vs.push_back(world); 
	} 
	while(tt>>world){
		vt.push_back(world); 
	} 
	for(int i=0;i<vs.size();i++) chuyen(vs[i]);
	for(int i=0;i<vt.size();i++) chuyen(vt[i]);
	set<string>se1,se2;
	for(int i=0;i<vt.size();i++) se2.insert(vt[i]);
	for(int i=0;i<vs.size();i++){
		if(se2.count(vs[i])==0) se1.insert(vs[i]); 
	} 
	for(auto x:se1) cout<<x<<" ";
	return 0; 
}
