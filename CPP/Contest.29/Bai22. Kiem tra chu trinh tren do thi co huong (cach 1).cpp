#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

vector<int> ke[1001];
int color[1001];
//int parent[1001]; 
int n,m; 
void nhap() 
{
	cin>>n>>m; 
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
	//	ke[y].push_back(x); 
	} 
	memset(color,0,sizeof(color)); 
}
bool dfs(int u) 
{
	color[u]=1;
	for(int v:ke[u]){
		if(color[v]==0){
			color[v]=1;
		//	parent[v]=u; 
			if(dfs(v)) return true; 
		}else if(color[v]==1) return true; 
	} 
	color[u]=2; 
	return false; 
}
int main() 
{
	nhap();
	bool ok=false;
	for(int i=1;i<=n;i++){
		if(color[i]==0){
			if(dfs(i)) ok=true; 
		} 
	} 
	if(ok) cout<<1;
	else cout<<0; 
	return 0; 
}
