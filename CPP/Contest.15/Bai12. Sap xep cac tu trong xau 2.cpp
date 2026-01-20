#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<set> 

using namespace std;

bool tn(string s) 
{
	string s1;
	for(int i=0;i<s.size();i++) 
		s1+=s[s.size()-1-i];
	if(s1==s) return true;
	else return false; 
}
bool cmp(string a,string b) 
{
	return a.size()<b.size(); 
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
	vector<string> v2; 
	set<string> se; 
	for(int i=0;i<v.size();i++){
		if(tn(v[i])){
			se.insert(v[i]);
			v2.push_back(v[i]); 
		}
	}
	stable_sort(v2.begin(),v2.end(),cmp);
	for(int i=0;i<v2.size();i++){
		if(se.count(v2[i])){
			cout<<v2[i]<<" ";
			se.erase(v2[i]); 
		} 
	}
	return 0; 
}
