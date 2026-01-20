#include<iostream>
#include<string>
#include<map> 
#include<vector>
#include<sstream>
#include<algorithm> 
 
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
		int pos=s.find("-");
		int t1=pos+2,t2=pos-2; 
		while(s[t1]!=' '){
			t1++; 
		} 
		while(s[t2]!=' '){
			t2--; 
		}
		s[t1]='-';s[t2]='-';
		vector<string> v;
		string world;
		stringstream ss(s); 
		while(getline(ss,world,'-')){
			v.push_back(world); 
		} 
		if(mp.count(v[0])==0)mp.insert({v[0],stoi(v[1])});
		else mp[v[0]] +=stoi(v[1]);
		if(mp.count(v[3])==0)mp.insert({v[3],stoi(v[2])});
		else mp[v[3]] +=stoi(v[2]);
	} 
	vector<pair<string,int> >luu ;
	for(auto x:mp) luu.push_back({x.first,x.second});
	sort(luu.begin(),luu.end(),cmp); 
	for(int i=0;i<luu.size();i++){
		cout<<luu[i].first<<" "<<luu[i].second<<endl; 
	} 
	return 0; 
}
