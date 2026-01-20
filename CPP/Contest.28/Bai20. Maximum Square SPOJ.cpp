#include<iostream> 
#include<algorithm>
#include<cstring> 

using namespace std;

int a[501][501];
int F[501][501]; 
int main() 
{
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j]; 
		} 
	} 
	memset(F,0,sizeof(F));
	int ln=0; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==1){
				F[i][j]=min({F[i-1][j],F[i][j-1],F[i-1][j-1]}) +1; 
			}else{
				F[i][j]=0; 
			} 
			ln=max(ln,F[i][j]); 
		} 
	}  
	cout<<ln;
	return 0; 
}
