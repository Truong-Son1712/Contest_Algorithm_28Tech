#include<iostream>

using namespace std;

bool check(int a[],int n) 
{
	for(int i=1;i<n;i++)
		if(a[i]<=a[i-1]) return false;
	return true; 
} 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
int main()
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	if(check(a,n)) cout<<"YES";
	else cout<<"NO";
	return 0; 
} 
