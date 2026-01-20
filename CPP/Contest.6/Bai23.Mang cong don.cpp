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
void mangcongdon(int a[], int F[], int n)
{
	F[0]=a[0];
	for(int i=1;i<n;i++)
		F[i]=F[i-1]+a[i]; 
 } 
int main()
{
	int n; cin>>n; int a[n],F[n]; 
	nhap(a,n);
	mangcongdon(a,F,n); 
	xuat(F,n); 
	return 0; 
}
