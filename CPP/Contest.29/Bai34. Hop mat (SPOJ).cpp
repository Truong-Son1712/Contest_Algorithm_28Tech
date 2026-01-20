#include<iostream>
#include<vector>
#include<cstring>
#include<map> 
using namespace std;

vector<int> ke[1001];
vector<int> t_ke[1001]; 
vector<int> luuk; 
bool visited[1001]; 
int k,n,m; 
void nhap() 
{
	cin>>k>>n>>m; 
	for(int i=1;i<=k;i++){
		int x; cin>>x;
		luuk.push_back(x); 
	} 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y); 
		t_ke[y].push_back(x); 
	} 
	memset(visited,false,sizeof(visited)); 
}
void dfs(int u,map<int,int>& mp) 
{
	visited[u]=true; 
	mp[u]++; 
	for(int v:t_ke[u]){
		if(!visited[v]) dfs(v,mp); 
	} 
}
bool xuly(int i) 
{
	map<int,int> mp; 
	dfs(i,mp);
	memset(visited,false,sizeof(visited)); 
	for(int x:luuk){
		if(mp[x]==0) return false; 
	} 
	return true; 
}
int main() 
{
	nhap();
	int dem=0; 
	for(int i=1;i<=n;i++){
		if(xuly(i)) dem++; 
	} 
	cout<<dem;
	return 0; 
}
