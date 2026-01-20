#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

void chuyen(string &s) 
{
	for(int i=0;i<s.size();i++)
		s[i]=(char)tolower(s[i]); 
}
int main() 
{
	string s; getline(cin,s);
	stringstream ss(s);
	string world;
	vector<string>v;
	set<string> se; 
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++){
		chuyen(v[i]);
		se.insert(v[i]); 
	} 
	cout<<se.size();
	return 0; 
}
