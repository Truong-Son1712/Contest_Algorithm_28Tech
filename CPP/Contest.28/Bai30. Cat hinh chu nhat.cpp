#include<iostream>
#include<cstring>
 
using namespace std;

int F[501][501];
int tinh(int n,int m)
{
	if(n==m) return 0;
	if(F[n][m]!=0) return F[n][m];
	int res=1e9;
	for(int i=1;i<=m-1;i++){
		res=min(res,tinh(n,i)+tinh(n,m-i)+1); 
	} 
	for(int i=1;i<=n-1;i++){
		res=min(res,tinh(i,m)+tinh(n-i,m)+1); 
	} 
	F[n][m]=res;
	return res; 
}
int main() 
{
	int n,m; cin>>n>>m;
	cout<<tinh(n,m);
	return 0; 
}
