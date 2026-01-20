#include<iostream>

using namespace std;

int dx[4]={-1,-1,1,1};
int dy[4]={-1,1,-1,1};
int a[21][21];
int n; 
void loang(int i,int j) 
{
	a[i][j]=2;
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=n&&a[i1][j1]==0)
			loang(i1,j1); 
	} 
}
int main() 
{
	cin>>n;
	int s,t; cin>>s>>t; 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	loang(s,t);
	int dem=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++ ){
			if(a[i][j]==2) dem++; 
		} 
	} 
	cout<<dem<<endl;
	return 0; 
}
