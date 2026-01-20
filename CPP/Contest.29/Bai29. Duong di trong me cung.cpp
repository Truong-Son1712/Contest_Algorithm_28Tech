#include<iostream>
#include<cstring>
#include<queue> 

using namespace std;

int n; 
int s,t,u,v; 
bool ok=false; 
int F[1001][1001];
struct node 
{
	int x,y,tt;	
};
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1}; 
void nhap() 
{
	cin>>n>>s>>t>>u>>v; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>F[i][j]; 
	} 
}
int bfs() 
{	
	node a={s,t,0}; 
	queue<node> q; q.push(a);
	F[s][t]=0; 
	while(!q.empty()){
		node h=q.front(); q.pop(); 
		if(h.x==u&&h.y==v){
			return h.tt; 
		} 
		for(int k=0;k<8;k++){
			int i1=h.x+dx[k];
			int j1=h.y+dy[k];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=n&&F[i1][j1]==1){
				node h1={i1,j1,h.tt+1};
				q.push(h1); 
				F[i1][j1]=0; 
			}
		} 
	} 
	return -1; 
}
int main() 
{
	nhap();
	cout<<bfs(); 
	return 0; 
}
