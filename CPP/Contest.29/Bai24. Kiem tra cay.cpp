#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue> 

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
bool bfs(int u) 
{
	visited[u]=true;
	queue<int>q; q.push(u);
	while(!q.empty()){
		int v=q.front(); q.pop();
		for(int x:ke[v]){
			if(!visited[x]){
				parent[x]=v;
				visited[x]=true; 
				q.push(x); 
			}
			else if(parent[v]!=x) {
				return true; 
			}
		} 
	}
	return false; 
}
int main() 
{
	nhap();
	bool ok=false;
	if(bfs(1)) ok=true;
	for(int i=1;i<=n;i++){
		if(!visited[i]) ok=true; 
	} 
	if(ok) cout<<0;
	else cout<<1; 
	return 0; 
}
