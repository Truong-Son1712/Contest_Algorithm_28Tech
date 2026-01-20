#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<string,int> a,pair<string,int> b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a.first<b.first; 
}
struct truycap 
{	
	string ngay,gio,dc;
	friend istream& operator >> (istream& in, truycap &x){
		cin>>x.ngay>>x.gio>>x.dc;
		return in; 
	} 
};
int main() 
{
	truycap x;
	map<string,int> mp; 
	while(cin>>x){
		mp[x.dc]++; 
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
