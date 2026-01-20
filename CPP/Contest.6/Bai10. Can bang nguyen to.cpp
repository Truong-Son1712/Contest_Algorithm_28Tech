#include<bits/stdc++.h>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int dem[10000001];
 bool ngto(int n)
 {
 	for(int i=2;i<=sqrt(n);i++)
	 	if(n%i==0) return false;
	return n>1; 
  }
  int tongtrai(int a[], int n, int x)
  {
  	int tongtrai=0; 
  	for(int i=0;i<x;i++)
	   tongtrai+=a[i]; 
	return tongtrai; 
   }
   int tongphai(int a[], int n,int x)
    {
    	int tongphai=0;
		for(int i=x+1;i<n;i++)
			tongphai+=a[i]; 
		return tongphai; 
	}
  void chisothoaman(int a[], int n)
  {
	  for(int i=1;i<n;i++){
	  	 if(ngto(tongtrai(a,n,i))&&ngto(tongphai(a,n,i))) cout<<i<<" "; 
	  } 
   } 
   int main()
{
	int n; cin>>n; int a[n]; 
	Nhap(a,n);
	chisothoaman(a,n);
	return 0; 
	}    
