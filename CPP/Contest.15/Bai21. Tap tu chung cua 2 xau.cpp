#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

void chuyenthuong(string &s)
{
	for(int i=0;i<s.size();i++)
		s[i]=tolower(s[i]); 
} 
int main() 
{
	string s1;getline(cin,s1);
	string s2;getline(cin,s2);
	string world;
	vector<string> v1,v2;
	stringstream ss1(s1),ss2(s2);
	while(ss1>>world){
		v1.push_back(world); 
	} 
	while(ss2>>world){
		v2.push_back(world); 
	}
	for(int i=0;i<v1.size();i++) chuyenthuong(v1[i]); 
	for(int i=0;i<v2.size();i++) chuyenthuong(v2[i]); 
	set<string>se1,giao;
	for(int i=0;i<v1.size();i++) se1.insert(v1[i]);
	for(int i=0;i<v2.size();i++){
		if(se1.count(v2[i]))giao.insert(v2[i]); 
	} 
	for(auto x: giao) cout<<x<<" ";
	return 0; 
}
