#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

bool cmp( pair<long long,int> a,pair<long long,int> b) 
{
	return a.second>b.second; 
}
bool check(long long n)
{
	long long temp=n;
	long long dn=0;
	while(n>0){
		int du=n%10;
		if(du%2!=0) return false;
		dn=dn*10+du;
		n=n/10; 
	} 
	if(temp==dn) return true;
	else return false; 
}
int main() 
{
	long long world;
	map<long long,int> mp; 
	while(cin>>world){
		if(check(world)) mp[world]++; 
	} 
	vector<pair<long long,int> >v; 
	for(auto x:mp){
		v.push_back({x.first,x.second}); 
	} 
	sort(v.begin(),v.end(),cmp);
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl; 
	} 
	return 0; 
}
