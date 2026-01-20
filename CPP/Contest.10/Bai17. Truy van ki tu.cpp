#include<iostream>
#include<string>
#include<map>
#include<vector> 
#include<algorithm> 

using namespace std;

bool cmp(pair<char,int> a,pair<char,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a.first<b.first ;
}
int main() 
{
	string s; cin>>s;
	map<char,int> mp;
	for(int i=0;i<s.size();i++)
		mp[s[i]]++;
	vector<pair<char,int> >v;
	for(auto x:mp) v.push_back({x.first,x.second});
	sort(v.begin(),v.end(),cmp);
	cout<<v[0].first<<" "<<v[0].second<<endl;
	cout<<v[v.size()-1].first<<" "<<v[v.size()-1].second<<endl;
	cout<<mp.size();
	return 0; 
}
