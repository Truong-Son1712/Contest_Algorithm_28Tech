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
bool operator<(const edge &a, const edge &b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}
typedef pair<edge,int> ei; 
typedef pair<int,edge> ie; 
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0}; 
int n,m;
int F[501][501]; 
map<edge,int> d; 
//vector<ii> adj[1001];
map<edge,vector<ei>> adj; 
void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>F[i][j];
			edge c={i,j};
			d[c]=1e9; 
		}
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=0;k<4;k++){
				int i1=i+dx[k];
				int j1=j+dy[k];
				if(i1>=1&&i1<=n&&j1>=1&&j1<=m){
					edge a={i,j};
					edge b={i1,j1};
					adj[a].push_back((ei){b,F[i1][j1]}); 
				} 
			} 
		} 
	} 
}
void dijkstra(edge s)
{
	//vector<int> d(n+1,1e9);
	d[s]=0;
	priority_queue<ie,vector<ie>,greater<ie>>q;
	q.push({0,s});
	while(!q.empty()){
		ie top=q.top(); q.pop();
		edge u=top.second; int kc=top.first; 
		if(kc>d[u]) continue;
		for(ei it:adj[u]){
			edge v=it.first;int w=it.second;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v],v}); 
			}
		} 
	} 
	edge res={n,m};
	cout<<d[res]+F[1][1]; 
}
int main() 
{
	nhap();
	dijkstra((edge){1,1});
	/*cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<d[(edge){i,j} ]<<" "; 
		} 
		cout<<endl; 
	} */
	return 0; 
}
