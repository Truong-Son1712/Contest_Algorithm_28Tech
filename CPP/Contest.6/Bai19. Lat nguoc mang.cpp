#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
void latnguoc(int a[], int b[], int n)
{
	for(int i=0;i<n;i++)
		b[i]=a[n-1-i]; 
 } 
 void xuat(int a[], int n)
 {
 	for(int i=0;i<n; i++)
	 	cout<<a[i]<<" ";
  } 
int main()
{
	int n; cin>>n; int a[n],b[n]; 
	nhap(a,n);
	latnguoc(a,b,n);
	xuat(b,n); 
	return 0; 
}
