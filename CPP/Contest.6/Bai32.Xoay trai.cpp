#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
int dem[1000001]; 
void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
 } 
void xoaytrai(int a[],int n,int k)
{
	for(int i=n;i<n+k;i++)
		a[i]=a[i-n];
	for(int i=0;i<n;i++)
		a[i]=a[i+k]; 
 } 
int main()
{
	int n,k; cin>>n>>k; int a[n];
	nhap(a,n);
	xoaytrai(a,n,k); 
	xuat(a,n); 
	return 0; 
}
