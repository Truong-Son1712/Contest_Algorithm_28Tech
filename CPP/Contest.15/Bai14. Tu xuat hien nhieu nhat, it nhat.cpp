#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

bool cmp2(pair<string,int>a,pair<string,int>b) 
{
	if(a.second!=b.second) return a.second<b.second;
	else return a>b; 
}
bool cmp(pair<string,int>a,pair<string,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a>b; 
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
	map<string,int> mp; 
	for(int i=0;i<v.size();i++) mp[v[i]]++;
	vector<pair<string,int> >v2;
	for(auto x:mp) v2.push_back({x.first,x.second});
	sort(v2.begin(),v2.end(),cmp); 
	cout<<v2[0].first<<" "<<v2[0].second<<endl; 
	sort(v2.begin(),v2.end(),cmp2);
	cout<<v2[0].first<<" "<<v2[0].second;
	return 0; 
}
 
