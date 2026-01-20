#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
int GTLN(int a[], int n)
{
	int max=a[0]; 
	for(int i=0;i<n;i++)
		if(a[i]>max) max=a[i];
	return max; 
}
int dem(int a[], int n, int x)
{
	int res=0;
	for(int i=0;i<n;i++)
		if(a[i]==x) res++;
	return res; 
 } 
 int GTL2(int a[], int n)
 {
 	int max=GTLN(a,n), max2=0; 
	 if(dem(a,n,max)>1) return max;
	 for(int i=0;i<n;i++)
	 	if(a[i]>max2&&a[i]<max) max2=a[i];
	return max2; 
  } 

void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 


int main()
{
	int n; cin>>n; int a[n];
	nhap(a,n);
	cout<< GTLN(a,n)<<" "<<GTL2(a,n); 
	return 0; 
}
