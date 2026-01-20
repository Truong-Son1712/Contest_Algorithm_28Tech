#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map> 
 
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b) 
{
	if(a.first!=b.first) return a.first<b.first;
	else return a.second<b.second; 
}
int main() 
{
	string s; cin>>s;
	vector<pair<int,int>> v; 
	int n=s.size(); 
	int a[n]; 
	for(int i=0;i<s.size();i++) 
		a[i]=s[i]-'0';
	int dem0=0,dem1=0;
	int b[n+1]; 
	for(int i=0;i<n;i++){
		if(a[i]==0){
			dem0++;
			v.push_back({dem0,dem1}) ; 
		} else{
			dem1++;
			v.push_back({dem0,dem1}) ;
		} 
	} 
	/*for(int i=0;i<v.size();i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
	cout<<endl; */ 
	for(int i=1;i<n+1;i++){
		b[i]=v[i-1].first-v[i-1].second; 
	} 
	b[0]=0; 
	int res=-1; 
	map<int,int>mp;
	mp[b[0]]=0; 
	for(int i=1;i<n+1;i++){
		if(mp.count(b[i])!=0) res=max(res,i-mp[b[i]]) ;
		else mp[b[i]]=i; 
	} 
	cout<<res; 
	return 0; 
}
