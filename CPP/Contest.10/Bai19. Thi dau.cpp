#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;
 
int main() 
{
	int N; cin>>N;
	cin.ignore(1);
	map<string,vector<string> >mp;
	while(N--){
		string s;getline(cin,s);
		int pos= s.find("-");
		s.erase(pos-1,1);
		int pos2= s.find("-");
		s.erase(pos2+1,1);
		vector<string> luu;
		string world;
		stringstream ss(s);
		while(getline(ss,world,'-')){
			luu.push_back(world); 
		} 
		vector<string> v; 
		if(mp.count(luu[0])==0){
			mp.insert({luu[0],v});
			mp[luu[0]].push_back(luu[1]); 
		}else{
			mp[luu[0]].push_back(luu[1]); 
		} 
		if(mp.count(luu[1])==0){
			mp.insert({luu[1],v});
			mp[luu[1]].push_back(luu[0]); 
		}else{
			mp[luu[1]].push_back(luu[0]); 
		} 
	} 
	vector<pair<string,vector<string> > > h; 
	for(auto x:mp){
		vector<string> l=x.second;
		sort(l.begin(),l.end()); 
		h.push_back({x.first,l}); 
	} 
	//for(auto x:mp){
	//	sort(x.second.begin(),x.second.end(),greater<string>()); 
	//} 
	for(auto x:h){
		int n=x.second.size(); 
		cout<<x.first<<" : "; 
		for(int i=0;i<n-1;i++) cout<<x.second[i]<<", ";
		cout<<x.second[n-1]; 
		cout<<endl; 
	} 
	return 0; 
}
