#include<bits/stdc++.h>
using namespace std; 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int main()
 {
 	int n; cin>>n; int a[n];
	nhap(a,n);
	int x; cin>>x;
	int demlon=0, demnho=0;
	for(int i=0;i<n;i++){
		if(a[i]>x) demlon++;
		else if(a[i]<x) demnho++; 
	} 
	cout<<demnho<<endl<<demlon;
	return 0; 
  } 
