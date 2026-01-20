#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
void lonhon(int a[], int n)
{
	for(int i=1;i<n-1;i++)
		if(a[i]>a[i-1]&& a[i]>a[i+1]) cout<<a[i]<<" "; 
 } 
int main()
{
	int n; cin>>n; int a[n],b[n]; 
	nhap(a,n);
	lonhon(a,n); 
	return 0; 
}
