#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int n,m;
vector<int> ke[1001];
bool visited[1001];
int len[1001]; 
void nhap() 
{
	cin>>n; m=n-1; 
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=m;i++){
		int x,y; cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x); 
	} 
}
void bfs(int u,int cc) 
{
	queue<pair<int,int>>q; 
	visited[u]=true;
	len[u]=cc; 
	q.push({u,cc});
	while(!q.empty()) 
	{
		int v=q.front().first,h=q.front().second; q.pop();
		visited[v]=true; 
		len[v]=h; 
		for(int x:ke[v]){
			if(!visited[x]) q.push({x,h+1}); 
		} 
	}
}
int main() 
{
	nhap();
	bfs(1,0);
	for(int i=1;i<=n;i++) cout<<len[i]<<" ";
	return 0; 
}
