#include<iostream> 

using namespace std;
 
int main() 
{
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int j=0;j<n;j++) cout<<a[0][j]<<" ";
	for(int i=1;i<n-1;i++) cout<<a[i][0]<<" "<<a[i][n-1]<<" ";
	for(int j=0;j<n;j++) cout<<a[n-1][j]<<" "; 
	return 0; 
}
