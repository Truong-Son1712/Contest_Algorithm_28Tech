#include<iostream>
#include<cstring>
#include<vector>
#include<queue> 
#include<map> 

using namespace std;

struct edge 
{
	int x,y; 
};
typedef pair<int,edge> ii; 
int n,m;
map<edge,int> d ;
map<edge,vector<ii>> adj; 
int F[501][501];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0}; 
void nhap() 
{
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>F[i][j];
			edge a={i,j};
			d[a]=1e9; 
		}
	} 
}
void ktao() 
{
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=0;k<4;k++){
				int i1=i+dx[k];
				int j1=j+dy[k];
				if(i1>=1&&i1<=n&&j1>=1&&j1<=m){
					edge a={i,j};
					edge b={i1,j1};
					adj[a].push_back({F[i1][j1],b}); 
				} 
			} 
		} 
	} 
}
void dijkstra(edge s)
{

	d[s]=0;
	priority_queue<ii,vector<ii>,greater<ii>>q;
	q.push({0,s});
	while(!q.empty()){
		ii top=q.top(); q.pop();
		edge u=top.second;int kc=top.first; 
		if(kc>d[u]) continue;
		for(auto it:adj[u]){
			edge v=it.second;int w=it.first;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v],v}); 
			}
		} 
	} 
	edge a={n,m};
	cout<< d[a]; 
}
int main() 
{
	nhap();
	ktao(); 
	edge a={1,1}; 
	dijkstra(a);
	return 0; 
}
