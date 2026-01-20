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
	int max=dem[a[0]] ,k=0; 
	for(int i=n-1;i>=0;i--){
		if(dem[a[i]]>=max){
			max=dem[a[i]];
			k=i;
		}
	}
	cout<<a[k]<<" "<<max; 
  } 
int main()
{
	int n; cin>>n; int a[n]; 
	nhap(a,n);
	demtansuat(a,n); 
	return 0; 
}
