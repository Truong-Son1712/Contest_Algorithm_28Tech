#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector> 

using namespace std;

bool cmp1(pair<char,int> a,pair<char,int> b) 
{
	if(a.second!=b.second) return a.second>b.second ;
	else return a.first>b.first; 
}
bool cmp2(pair<char,int> a,pair<char,int> b) 
{
	if(a.second!=b.second) return a.second<b.second ;
	else return a.first>b.first; 
}
int main() 
{
	string s; cin>>s;
	map<char,int>mp;
	for(int i=0;i<s.size();i++) mp[s[i]]++;
	vector<pair<char,int> >v; 
	for(pair<char,int> x:mp) v.push_back({x.first,x.second});
	sort(v.begin(),v.end(),cmp1); 
	cout<<v[0].first<<" "<<v[0].second<<endl;
	sort(v.begin(),v.end(),cmp2);
	cout<<v[0].first<<" "<<v[0].second;
	return 0; 
}
