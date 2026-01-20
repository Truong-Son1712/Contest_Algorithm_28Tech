#include<iostream>
#include<cstring>

using namespace std;

int mod=1e9+7; 
long long F[1001][1001];
char a[1001][1001]; 
int main() 
{
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j]; 
	} 
	memset(F,0,sizeof(F));
	F[1][1]= 1; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) 
		{
			if(a[i][j]=='*') F[i][j]=0;
			else{
				if(i!=1||j!=1){
					F[i][j]=F[i-1][j]+F[i][j-1];
					F[i][j]%=mod; 
				} 
			} 
		}
	} 
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<F[i][j];
		cout<<endl; 
	} 
	cout<<F[n][n];
	return 0; 
}
