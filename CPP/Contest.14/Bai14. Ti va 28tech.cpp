#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;
bool check(string s) 
{
	for(int i=0;i<s.size();i++)
		s[i]=(char)tolower(s[i]);
	if(s=="28tech") return true;
	else return false; 
}
int main() 
{
	string s; getline(cin,s);
	stringstream ss(s);
	string world;
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	int dem=0;
	for(int i=0;i<v.size();i++){
		if(check(v[i])) dem++; 
	} 
	cout<<dem;
	return 0; 
}
