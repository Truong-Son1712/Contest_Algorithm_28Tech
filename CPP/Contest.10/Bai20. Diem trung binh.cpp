#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<map>
#include<iomanip> 
#include<algorithm>
 
using namespace std;

bool cmp(pair<string,pair<int,int> >a,pair<string,pair<int,int> >b) 
{
	return a.first>b.first; 
}
int main() 
{
	int T; cin>>T;
	cin.ignore(1); 
	map<string,pair<int,int> >mp; 
	while(T--){
		string s; 
		getline(cin,s); 
		stringstream ss(s); 
		string world;
		vector<string> luu;
		while(ss>>world){
			luu.push_back(world); 
		} 
		int sum=stoi(luu[1])*stoi(luu[2]);
		int tc=stoi(luu[1]); 
		if(mp.count(luu[0])==0) 
			mp.insert({luu[0],{sum,tc}});
		else{
			mp[luu[0]].first+= sum;
			mp[luu[0]].second+=tc; 
		} 
	} 
	vector<pair<string,pair<int,int> > > h;
	for(auto x:mp){
		h.push_back({x.first,{x.second.first,x.second.second}}); 
	} 
	sort(h.begin(),h.end(),cmp); 
	for(auto x:h){
		double diem=(double)x.second.first/x.second.second; 
		cout<<x.first<<" : "<<fixed<<setprecision(2)<<diem<<endl; 
	} 
	return 0; 
}
