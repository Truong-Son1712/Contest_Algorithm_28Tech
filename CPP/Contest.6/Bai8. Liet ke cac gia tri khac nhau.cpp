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
	for(int i=0;i<n;i++){
		bool check=true;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				check=false;
				break; 
			} 
		} 
		if(check) cout<<a[i]<<" "; 
	} 
	return 0;   
   } 
