#include <bits/stdc++.h>
#include<math.h> 

using namespace std;
long long GCD(int a[], int n)
{
	int res=__gcd(a[0], a[1]);
	for(int i=0;i<n;i++)
		res=__gcd(res,a[i]);
	return res; 
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
	cout<<GCD(a,n); 
	return 0; 
}
