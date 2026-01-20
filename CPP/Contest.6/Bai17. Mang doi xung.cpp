#include <bits/stdc++.h>
#include<math.h> 

using namespace std;


void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
bool doixung(int a[], int n)
{
	int l=0, r =n-1;
	while(l<=r){
		if(a[l]!=a[r]) return false;
		l++;
		r--; 
	} 
	return true; 
 } 
int main()
{
	int n; cin>>n; int a[n];
	nhap(a,n);
	if(doixung(a,n))cout<<"YES";
	else cout<<"NO"; 
	return 0; 
}
