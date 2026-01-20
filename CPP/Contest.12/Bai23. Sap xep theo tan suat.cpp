#include<iostream>
#include<map>
#include<algorithm>
#include<vector> 

using namespace std;

bool cmp1(pair<int,int>a,pair<int,int>b) 
{
	if(a.second!=b.second) return a.second>b.second;
	else return a<b; 
}
bool cmp2(pair<int,int>a,pair<int,int>b) 
{
	return a.second>b.second;
}
int main() 
{
	int n; cin>>n;
	int a[n]; 
	map<int,int>mp; 
	vector<pair<int,int> > v; 
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		mp[a[i]]++; 
	} 
	for(int i=0;i<n;i++){
		if(mp[a[i]]!=0){
			auto it=mp.find(a[i]);
			v.push_back({(*it).first,(*it).second}); 
			mp[a[i]]=0; 
		} 
	} 
	vector<pair<int,int> > v2=v; 
	sort(v2.begin(),v2.end(),cmp1);
	stable_sort(v.begin(),v.end(),cmp2) ;
	for(int i=0;i<v2.size();i++){
		for(int j=0;j<v2[i].second;j++)
			cout<<v2[i].first<<" "; 
	}
	cout<<endl;
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].second;j++) 
			cout<<v[i].first<<" "; 
	}
	return 0; 
}
