#include<iostream>


using namespace std;

long long F[501][501];

int main() 
{
	for(int i=0;i<=500;i++){
		F[0][i]=0;
		F[i][0]=0; 
	} 
	int a[501][501];
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) cin>>a[i][j];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			F[i][j]=a[i][j]+ max(F[i-1][j],F[i][j-1],F[i-1][j-1]); 
		} 
	} 
	cout<<F[n][m];
	return 0; 
}
