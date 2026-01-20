#include<iostream>
#include<map>
#include<algorithm>
#include<vector> 

using namespace std;

bool cmp(pair<string,int>a,pair<string,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a.first<b.first; 
}
int main() 
{
	map<string,int> mp; 
	string s;
	while(getline(cin,s)){
		if(s.find("good")!=string::npos) mp["good"]++;
		if(s.find("bad")!=string::npos)  mp["bad"]++;
		if(s.find("wonderful")!=string::npos)  mp["wonderful"]++;
		if(s.find("terrible")!=string::npos)  mp["terrible"]++;
	} 
	vector<pair<string,int> >v;
	for(auto x:mp){
		v.push_back({x.first,x.second}); 
	} 
	sort(v.begin(),v.end(),cmp);
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl; 
	} 
	return 0; 
}
