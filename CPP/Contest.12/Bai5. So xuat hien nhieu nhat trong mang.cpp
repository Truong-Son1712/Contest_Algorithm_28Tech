#include<iostream>
#include<algorithm>
#include<map> 
#include<vector> 

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
	if(a.second!=b.second) return a.second>b.second;
	else return a<b; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	map<int,int>mp; 
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++; 
	}
	vector<pair<int,int> > v;
	for(auto it: mp)
		v.push_back(it); 
	sort(v.begin(),v.end(),cmp);
	cout<<v[0].first<<" "<<v[0].second;
	return 0; 
}
