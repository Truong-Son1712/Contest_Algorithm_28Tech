#include<iostream>
#include<set>
#include<map> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			cin>>a[i][j];
	map<int,int>mp; 
	for(int i=0;i<n;i++){
		set<int>se;
		for(int j=0;j<n;j++)
			se.insert(a[i][j]);
		for(auto x:se) mp[x]++; 
	} 
	bool ok=false; 
	for(pair<int,int> x:mp){
		if(x.second==n){
			ok=true; 
			cout<<x.first<<" "; 
		}
	} 
	if(ok==false) cout<<"NOT FOUND"; 
	return 0; 
}
