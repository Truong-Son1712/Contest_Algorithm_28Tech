#include<iostream>
#include<math.h> 

using namespace std;

bool nt(int n) 
{
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false; 
	} 
	return n>1; 
}
int main() 
{
	int n,m; cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(nt(a[i][j])) cout<<a[i][j]<<" ";
		cout<<endl; 
	} 
	return 0; 
}
