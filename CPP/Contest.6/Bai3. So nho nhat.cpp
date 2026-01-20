#include<bits/stdc++.h>
using namespace std; 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int GTNN(int a[], int n)
 {
 	int min=a[0];
	for(int i=0;i<n;i++)
	 	if(a[i]<min) min=a[i];
	return min;  
  }
 int solan(int a[], int n)
 {
 	int x=GTNN(a,n), dem=0;
	for(int i=0;i<n;i++)
		if(a[i]==x) dem++;
	return dem; 
  } 
  int main()
  {
  	int n; cin>>n; int a[n];
	nhap(a,n);
	cout<<solan(a,n);
	return 0; 
   } 
