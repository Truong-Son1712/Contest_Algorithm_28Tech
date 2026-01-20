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
void mangxaydung(int a[], int F[], int n,int k)
{
	for(int i=0;i<=n-k;i++){
		int sum=0; 
		for(int j=i;j<i+k;j++)
			sum=sum+a[j]; 
		F[i]=sum;
	}
 } 
int main()
{
	int n,k; cin>>n>>k; int a[n],F[n-k+1]; 
	nhap(a,n);
	mangxaydung(a,F, n,k) ;
	xuat(F,n-k+1); 
	return 0; 
}
