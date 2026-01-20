#include<iostream>
#include<math.h>
#include<set>
 
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
	set<int> se; 
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];  
	for(int i=0;i<n;i++){
	 	if(nt(a[i][i])) se.insert(a[i][i]);
	 	if(nt(a[i][n-i-1]))se.insert(a[i][n-i-1]);
	}
	cout<<se.size(); 
	return 0; 
}
