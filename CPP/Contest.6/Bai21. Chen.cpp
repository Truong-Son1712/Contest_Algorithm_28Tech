#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 

void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" "; 
}
void chen(int a[],int &n,int x,int k) 
{
	for(int i=n;i>=k;i--)
		a[i]=a[i-1];
	a[k]=x;
	n++; 
}
int main()
{
	int n,x,k; cin>>n>>x>>k; int a[n];
	nhap(a,n);
	chen(a,n,x,k) ;
	xuat(a,n); 
	return 0; 
}
