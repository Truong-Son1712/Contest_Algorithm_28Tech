#include<iostream>
#include<map>
#include<vector>
#include<algorithm> 

using namespace std;

int main() 
{
	int n,m; cin>>n>>m;
	map<int,vector<int> >mp;
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		mp[x].push_back(y);
		mp[y].push_back(x); 
	} 
	for(int i=1;i<=n;i++){
		cout<<i<<" : ";
		vector<int> v=mp[i]; 
		sort(v.begin(),v.end()); 
		for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
		cout<<endl; 
	} 
	return 0; 
}
