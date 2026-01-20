#include<iostream>
#include<cstring>
#include<queue>

using namespace std; 
int n,s,t,u,v;
int F[1001][1001];
//bool visited[1001];
struct node 
{
	int x,y,tt;	
};
int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={-1,1,-2,2,-2,2,-1,1};
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
	queue<node> q; q.push(a); F[s][t]=0; 
	while(!q.empty()) 
	{
		node b=q.front(); q.pop();
		int i=b.x, j=b.y;
		if(i==u&&j==v){
			return b.tt; 
		}
		for(int k=0;k<8;k++) 
		{
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=n&&F[i1][j1]==1){
				node c={i1,j1,b.tt+1};
				q.push(c); 
				F[i1][j1] =0; 
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
