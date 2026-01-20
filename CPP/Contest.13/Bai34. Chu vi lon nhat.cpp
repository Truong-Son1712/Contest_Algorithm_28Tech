#include<iostream>

using namespace std;

int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int a[100][100];
int n,m;

void loang(int i,int j,int &P) 
{ 
	P+=4; 
	a[i][j]=2;
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]==1){
			loang(i1,j1,P); 
		} 
		if(i1>=0&&i1<n&&j1>=0&&j1<m&&a[i1][j1]!=0){
			P--; 
		} 
	} 
}
int main() 
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	int res=0; 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			if(a[i][j]==1){
				int P=0;
				loang(i,j,P);
				res=max(res,P); 
			} 
	} 
	cout<<res; 
	return 0; 
}
