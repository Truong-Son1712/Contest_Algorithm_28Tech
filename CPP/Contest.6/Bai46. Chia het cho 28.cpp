#include<iostream>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
int dem(int a[],int n) 
{
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if((a[i]+a[j])%28==0) count++;
	return count; 
} 
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<dem(a,n);
	return 0; 
} 
