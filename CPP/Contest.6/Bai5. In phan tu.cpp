#include<bits/stdc++.h>
using namespace std; 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 void inphantu(int a[], int n)
 {
 	bool check=false; 
 	for(int i=0;i<n;i+=2){
 		if(a[i]%2==0){
 			check=true;
			cout<<a[i]<<" "; 
		 } 
	 }
	if(check==false) cout<<"NONE"; 
  }
  int main()
  {
  	int n; cin>>n; int a[n];
	nhap(a,n);
	inphantu(a,n);
	return 0; 
   } 
