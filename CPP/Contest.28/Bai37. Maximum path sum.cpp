#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[102][101];
	long long F[102][101];
	memset(a,0,sizeof(a));
	memset(F,0,sizeof(F));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j]; 
	}
	for(int j=1;j<=n;j++){
		F[0][j]=-1000;
		F[n+1][j]=-1000; 
	} 
	for(int i=1;i<=n;i++){
		F[i][1]=a[i][1]; 
	} 
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n;i++){
			F[i][j]=a[i][j]+max({F[i][j-1],F[i+1][j-1],F[i-1][j-1]}); 
		} 
	} 
	long long ln=0;
	for(int i=1;i<=n;i++){
		ln=max(ln,F[i][n]); 
	} 
	cout<<ln;
	return 0; 
}
