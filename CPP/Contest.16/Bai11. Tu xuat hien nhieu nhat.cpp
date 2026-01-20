#include<iostream>
#include<iomanip>
#include<algorithm>
#include<map> 
#include<vector> 

using namespace std;

bool tn(string s)
{
	string temp=s; 
	reverse(s.begin(),s.end());
	if(temp==s) return true;
	else return false; 
}
bool cmp(pair<string,int> a,pair<string,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a.first<b.first; 
}
int main() 
{
	string s;
	map<string,int> mp;
	while(cin>>s){
		if(tn(s)) mp[s]++; 
	} 
	vector<pair<string,int> > v;
	for(auto x:mp){
		v.push_back({x.first,x.second}); 
	}
	sort(v.begin(),v.end(),cmp); 
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second<<endl; 
	} 
	return 0; 
}
