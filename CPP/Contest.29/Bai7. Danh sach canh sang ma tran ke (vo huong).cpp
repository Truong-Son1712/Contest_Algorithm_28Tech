#include<iostream> 
#include<cstring> 

using namespace std; 

int main() 
{
	int n,m; cin>>n>>m;
	pair<int,int> a[m];
	for(auto &x:a) cin>>x.first>>x.second;
	int F[1005][1005];
	memset(F,0,sizeof(F));
	for(int i=0;i<m;i++){
		F[a[i].first][a[i].second]=1;
		F[a[i].second][a[i].first]=1; 
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<F[i][j]<<" ";
		cout<<endl; 
	} 
	return 0; 
}
