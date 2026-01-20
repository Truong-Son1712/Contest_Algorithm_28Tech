#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int a[200][200];
	for(int j=1;j<=n;j++){
		a[0][j]=0;
		a[n+1][j]=0; 
	} 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]+=max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1])); 
		} 
	} 
	int res=0;
	for(int j=1;j<=n;j++)
		res=max(res,a[n][j]);
	cout<<res;
	return 0; 
}
