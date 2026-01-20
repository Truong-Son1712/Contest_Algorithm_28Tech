#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
void xuat(int a[], int n)
{
	for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
		cout<<a[n-1]; 
 } 
void chenmang(int a[],int b[],int &n, int m, int k)
{
	 
	for(int i=n+m-1;i>=k;i--)
		a[i]=a[i-m];
	for(int i=k;i<k+m;i++)
		a[i]=b[i-k];
	n=n+m;
 } 
int main()
{
	int n,m,p; cin>>n>>m>>p; int a[n],b[m]; 
	nhap(a,n);
	nhap(b,m);
	chenmang(a,b,n,m,p);
	xuat(a,n); 
	return 0; 
}
