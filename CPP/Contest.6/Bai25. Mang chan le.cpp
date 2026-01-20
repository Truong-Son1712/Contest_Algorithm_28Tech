#include <bits/stdc++.h>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 
int demchan(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]%2==0) dem++;
	return dem; 
 }
 int demle(int a[], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0) dem++;
	return dem; 
 }  
void mangchanle(int a[], int n)
{
	int chan=demchan(a,n), le=demle(a,n);
	if(chan>le) cout<<"CHAN";
	else if(chan<le) cout<<"LE";
	else cout<<"CHANLE"; 
 } 
int main()
{
	int n; cin>>n; int a[n]; 
	mangchanle(a,n) ;
	nhap(a,n);
	return 0; 
}
