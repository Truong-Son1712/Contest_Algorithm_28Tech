#include<iostream>

using namespace std;

int main() 
{
	int n, m; cin>>n>>m;
	int a[n][m];
	int lon=0, be=1e9+1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			lon=max(lon,a[i][j]);
			be=min(be,a[i][j]);
		}
	}
	cout<<be<<endl;
	for(int i=0;i<n;i++) 
		for(int j=0;j<m;j++)
			if(a[i][j]==be) cout<<i+1<<" "<<j+1<<endl;
	cout<<lon<<endl;
	for(int i=0;i<n;i++) 
		for(int j=0;j<m;j++)
			if(a[i][j]==lon) cout<<i+1<<" "<<j+1<<endl;
	return 0; 
}
