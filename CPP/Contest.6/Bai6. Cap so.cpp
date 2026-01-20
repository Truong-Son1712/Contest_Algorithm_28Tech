#include<bits/stdc++.h>
using namespace std; 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int capso(int a[], int n,int k)
 {
 	int dem=0; 
 	for(int i=0;i<n-1;i++)
	 	for(int j=i+1;j<n;j++)
		 	if(a[i]+a[j]==k) dem++;
	return dem; 
  } 
  int main()
  {
  	int n; cin>>n; int a[n];
	nhap(a,n);
	int k; cin>>k; 
	cout<<capso(a,n,k);
	return 0;   
   } 
