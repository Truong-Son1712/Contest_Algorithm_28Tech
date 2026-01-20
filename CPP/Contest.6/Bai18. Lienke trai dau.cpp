#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
void traidau(long long a[], int n)
{
	if(a[0]*a[1]<0) cout<<a[0]<<" " ;
	for(int i=1;i<n-1;i++)
		if(a[i]*a[i-1]<0||a[i]*a[i+1]<0) cout<<a[i]<<" "; 
	if(a[n-2]*a[n-1]<0) cout<<a[n-1]; 
 } 

void nhap(long long  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 

int main()
{
	int n; cin>>n; long long  a[n];
	nhap(a,n);
	traidau(a,n); 
	return 0; 
}
