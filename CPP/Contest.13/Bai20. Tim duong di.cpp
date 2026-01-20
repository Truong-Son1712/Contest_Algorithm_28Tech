#include<iostream>

using namespace std;

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0}; 
int a[200][200];
int n,m;
 
void loang(int i,int j) 
{
	a[i][j]=0;
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]==1)
			loang(i1,j1); 
	} 
}
int main() 
{
	cin>>n>>m;
	int s,t,u,v; cin>>s>>t>>u>>v; 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	loang(s,t);
	if(a[u][v]==1) cout<<"NO";
	else cout<<"YES";
	return 0;	
}
