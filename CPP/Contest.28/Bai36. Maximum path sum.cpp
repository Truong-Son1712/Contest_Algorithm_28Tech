#include<iostream>
#include<cstring>
#include<algorithm> 

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[101][102];
	long long F[102][101]; 
	memset(a,0,sizeof(a));
	memset(F,0,sizeof(F)); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j]; 
	} 
	for(int j=0;j<=n+1;j++){
		F[1][j]=a[1][j]; 
	} 
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++){
			F[i][j]=a[i][j]+max({F[i-1][j],F[i-1][j-1],F[i-1][j+1]}); 
		} 
	} 
	long long ln=0;
	for(int j=1;j<=n;j++){
		ln=max(ln,F[n][j]); 
	} 
	cout<<ln;
	return 0; 
}
