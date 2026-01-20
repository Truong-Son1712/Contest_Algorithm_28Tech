#include<iostream>
#include<cstring>
#include<vector>
 
using namespace std;

int n,m,dt=0; 
char F[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0}; 
vector<int>v ; 
void nhap() 
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
		for(int j=1;j<=m;j++) cin>>F[i][j]; 
	}
}
void dfs(int i,int j) 
{
	F[i][j]='#';
	dt++; 
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&F[i1][j1]=='.') dfs(i1,j1); 
	} 
}
int main() 
{
	nhap() ;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(F[i][j]=='.'){
				dfs(i,j);
				v.push_back(dt); 
				dt=0; 
			} 
		} 
	} 
	for(int x:v) cout<<x<<" ";
	return 0; 
}
