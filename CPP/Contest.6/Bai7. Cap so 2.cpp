#include<bits/stdc++.h>
using namespace std; 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int chenhlech(int a[], int n)
 {
 	int kc=abs(a[1]-a[0]); 
 	for(int i=0;i<n-1;i++)
	 	for(int j=i+1;j<n;j++)
		 	if(abs(a[i]-a[j])<kc) kc=abs(a[i]-a[j]) ;
	return kc; 
  } 
  int main()
  {
  	int n; cin>>n; int a[n];
	nhap(a,n);
	cout<<chenhlech(a,n); 
	return 0;   
   } 
