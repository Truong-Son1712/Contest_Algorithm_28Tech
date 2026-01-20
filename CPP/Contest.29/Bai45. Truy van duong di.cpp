#include<iostream>
#include<cstring>
#include<vector>
#include<queue> 

using namespace std;

typedef pair<int,int> ii; 
int n,m;
vector<ii> adj[1001]; 
int d[101][101]; 
void nhap() 
{
	cin>>n>>m; 
	for(int i=0;i<m;i++){
		int x,y,w; cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w}); 
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d[i][j]=1e9; 
		} 
	} 
}
void dijkstra(int s)
{
	//vector<int> d(n+1,1e9);
	d[s][s]=0;
	priority_queue<ii,vector<ii>,greater<ii>>q;
	q.push({0,s});
	while(!q.empty()){
		ii top=q.top(); q.pop();
		int u=top.second, kc=top.first; 
		if(kc>d[s][u]) continue;
		for(ii it:adj[u]){
			int v=it.first, w=it.second;
			if(d[s][v]>d[s][u]+w){
				d[s][v]=d[s][u]+w;
				q.push({d[s][v],v}); 
			}
		} 
	} 
}
int main() 
{
	nhap();
	for(int i=1;i<=n;i++){
		dijkstra(i); 
	} 
	int Q; cin>>Q; 
	while(Q--){
		int x,y; cin>>x>>y; 
		cout<<d[x][y]<<endl; 
	} 
	return 0; 
}
