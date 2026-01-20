#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>

using namespace std;

int main() 
{
	map<string,int> mp;
	string nt; int ntk;
	int k=10; 
	while(k--){
		cin>>nt>>ntk ;
		mp.insert({nt,ntk}); 
	} 
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		string s1=s,s2=s;
		for(int i=0;i<s1.size();i++)
			if(isdigit(s1[i])) s1[i]=' ';
		for(int i=0;i<s2.size();i++)
			if(isalpha(s2[i])) s2[i]=' ';
		string world;
		stringstream ss1(s1),ss2(s2);
		vector<string>v1;
		vector<int> v2;
		while(ss1>>world){
			v1.push_back(world); 
		} 
		while(ss2>>world){
			v2.push_back(stoi(world)); 
		} 
		int res=0;
		for(int i=0;i<v1.size();i++){
			res+=mp[v1[i]]*v2[i]; 
		} 
		cout<<res<<endl; 
	} 
}
