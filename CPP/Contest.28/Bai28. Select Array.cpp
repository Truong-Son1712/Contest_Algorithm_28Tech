#include<iostream> 

using namespace std;

long long F[100001][101];

int main() 
{
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int mod =1e9+7;
	if(a[1]!=0){
		F[1][a[1]]=1; 
	} else{
		for(int j=1;j<=m;j++){
			F[1][j]=1; 
		} 
	} 
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=1;j<=m;j++){
				F[i][j]=F[i-1][j-1]+F[i-1][j]+F[i-1][j+1];
				F[i][j]%=mod; 
			} 
		} else{
			F[i][a[i]]=F[i-1][a[i]-1]+F[i-1][a[i]]+F[i-1][a[i]+1];
			F[i][a[i]]%=mod; 
		} 
	} 
	long long res=0;
	for(int j=1;j<=m;j++){
		res+=F[n][j];
		res%=mod; 
	} 
	cout<<res;
	return 0; 
}
