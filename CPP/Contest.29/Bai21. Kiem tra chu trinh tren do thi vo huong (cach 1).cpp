#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

vector<int> ke[1001];
bool visited[1001];
int parent[1001]; 
int n,m; 
void nhap() 
{
	cin>>n>>m; 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
	memset(visited,false,sizeof(visited)); 
}
bool dfs(int u) 
{
	visited[u]=true;
	for(int v:ke[u]){
		if(!visited[v]){
			visited[v]=true;
			parent[v]=u; 
			if(dfs(v)) return true; 
		}else if(parent[v]!=u) return true; 
	} 
	return false; 
}
int main() 
{
	nhap();
	bool ok=false;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			if(dfs(i)) ok=true; 
		} 
	} 
	if(ok) cout<<1;
	else cout<<0; 
	return 0; 
}
