#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

bool tn(string s){
	string temp=s;
	string s1;
	for(int i=0;i<s.size();i++){
		s1+=s[s.size()-1-i] ;
	}
	if(s1==temp) return true;
	else return false; 
} 
int main() 
{
	string s; getline(cin,s);
	string world;
	vector<string> v;
	stringstream ss(s);
	while(ss>>world) {
		v.push_back(world); 
	}
	vector<string> v2; 
	for(int i=0;i<v.size();i++)
		if(tn(v[i])) v2.push_back(v[i]);
	sort(v2.begin(),v2.end()) ;
	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	return 0; 
}
