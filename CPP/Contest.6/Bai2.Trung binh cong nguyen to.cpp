#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 }
 bool ngto(int n) 
 {
 	for(int i=2;i<=sqrt(n);i++)
	 	if(n%i==0) return false;
	return n>1; 
 }
 double tbcngto(int a[], int n)
 {
 	int dem=0, tong=0;
	 for(int i=0;i<n;i++){
	 	if(ngto(a[i])){
	 		dem++;
			tong+=a[i]; 
		 }
	 }
	return (double)tong/dem; 
  } 
  int main()
  {
  	int n; cin>>n; int a[n];
	nhap(a,n);
	cout<<fixed<<setprecision(3)<<tbcngto(a,n);
	return 0; 
   } 
