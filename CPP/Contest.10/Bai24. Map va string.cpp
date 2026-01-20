#include<iostream>
#include<string>
#include<map> 
#include<vector>
#include<algorithm> 

using namespace std;

bool cmp2(pair<string,int>a, pair<string,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a.first<b.first ;
}
bool cmp1(pair<string,int>a, pair<string,int>b) 
{
	if(a.second!=b.second) return a.second<b.second;
	else return a.first<b.first ;
}
int main() 
{
	int n; cin>>n;
	map<string,int> mp; 
	while(n--){
		string s; cin>>s;
		if(mp.count(s)!=0) mp[s]++;
		else mp.insert({s,1}); 
	} 
	for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;;
	cout<<endl; 
	vector<pair<string,int> >v;
	for(auto x:mp) v.push_back({x.first,x.second});
	sort(v.begin(),v.end(),cmp1);
	cout<<v[0].first<<" "<<v[0].second<<endl;
	sort(v.begin(),v.end(),cmp2);
	cout<<v[0].first<<" "<<v[0].second<<endl;
	return 0; 
}
