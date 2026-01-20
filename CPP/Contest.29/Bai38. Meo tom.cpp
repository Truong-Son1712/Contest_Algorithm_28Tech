#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int n,m;
vector<int> ke[1001];
bool visited[1001];
int gian[1001]; 
int bbv[1001]; 
void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>gian[i]; 
	for(int i=1;i<=n-1;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
		bbv[x]++; bbv[y]++; 
	} 
	memset(visited,false,sizeof(visited)); 
}
void dfs(int u,int lt)
{
	visited[u]=true;
	for(int v:ke[u]){
		if(!visited[v]){
			if(gian[v]==0) dfs(v,0);
			else if(gian[v]==1&&lt+1<=m) dfs(v,lt+1); 
		} 
	} 
}
int demca() 
{
	int dem=0; 
	for(int i=2;i<=n;i++){
		if(bbv[i]==1&&visited[i]==true) dem++; 
	} 
	return dem; 
}
int main() 
{
	nhap();
	dfs(1,gian[1]);
	cout<<demca();
	return 0; 
}
