#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
int dem[1000001]; 
void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
 void demtansuat(int a[], int n)
 {
 	for(int i=0;i<n;i++)
	 	dem[a[i]]++;
	for(int i=0;i<n;i++){
		if(dem[a[i]]!=0){
			cout<<a[i]<<" "<<dem[a[i]]<<endl; 
			dem[a[i]]=0; 
		} 
	} 
  } 
int main()
{
	int n; cin>>n; int a[n]; 
	nhap(a,n);
	demtansuat(a,n); 
	return 0; 
}
