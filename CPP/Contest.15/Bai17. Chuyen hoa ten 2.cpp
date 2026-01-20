#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;
void chuyenthuong(string &s) 
{
	s[0]=toupper(s[0]); 
	for(int i=1;i<s.size();i++) 
		s[i]=tolower(s[i]); 
}
void chuyenhoa(string &s) 
{
	for(int i=0;i<s.size();i++) 
		s[i]=toupper(s[i]); 
}
int main() 
{
	string s; getline(cin,s);
	string world;
	vector<string> v;
	stringstream ss(s);
	while(ss>>world){
		v.push_back(world); 
	} 
	for(int i=0;i<v.size()-1;i++) chuyenthuong(v[i]);
	chuyenhoa(v[v.size()-1]);
	for(int i=0;i<v.size()-2;i++) cout<<v[i]<<" ";
	cout<<v[v.size()-2]<<','<<" "<<v[v.size()-1];
	cout<<endl;
	cout<<v[v.size()-1]<<','<<" ";
	for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
	return 0; 
}
