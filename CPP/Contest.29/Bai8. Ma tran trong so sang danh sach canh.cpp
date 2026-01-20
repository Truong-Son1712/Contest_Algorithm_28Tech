#include<iostream>

using namespace std;

int a[1001][1001]; 
int main() 
{
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cin>>a[i][j]; 
	} 
	for(int i=0;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(a[i][j]!=0) cout<<i<<" "<<j<<" "<<a[i][j]<<endl; 
		}  
	} 
	return 0; 
}
