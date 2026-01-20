#include<iostream>
#include<math.h>
 
using namespace std;

bool nt(int n) 
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return n>1; 
}
int main() 
{
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j]; 
	int cnt=0; 
	for(int i=0;i<n;i++){
	 	if(nt(a[i][i])) cnt++;
	 	if(nt(a[i][n-i-1]))cnt++;
	}
	if(n%2!=0){
		int i=n/2;
		if(nt(a[i][i]))
			cnt--; 
	} 
	cout<<cnt; 
	return 0; 
}
