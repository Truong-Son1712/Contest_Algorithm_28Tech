#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

void latnguoc(string &s) 
{
	string s1;
	for(int i=0;i<s.size();i++){
		s1+=s[s.size()-1-i];
	}
	s=s1; 
}
int main() 
{
	string s; getline(cin,s);
	string world;
	stringstream ss(s);
	vector<string> v;
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size();i++){
		if(i%2!=0) latnguoc(v[i]); 
	} 
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	return 0; 
}
