#include<bits/stdc++.h>
using namespace std;
void Nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 int dem[10000001];
 
 void Demtansuat(int a[], int n)
 {
 	
	 for(int i=0;i<n;i++)
	 	dem[a[i]]++;
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			cout<<a[i]<<" "<<dem[a[i]] <<endl;
			dem[a[i]]=0; 
		} 
	} 
  } 
  int main(){
  	int n; cin>>n ;int a[n]; 
	Nhap(a,n);
	Demtansuat(a,n);
	return 0; 
  } 
