#include<iostream>

using namespace std;

void nhap(int a[],int n)
{	
	for(int i=0;i<n;i++)
		cin>>a[i]; 
} 
int dem(int a[],int n) 
{	
	int sodaycontm=0; 
	for(int i=0;i<n;i++){
		int chan=0, le=0;
		for(int j=i;j<n;j++){
			if(a[j]%2==0) chan++;
			else le++;  
			if(chan==le) sodaycontm++; 
		}	 
	} 
	return sodaycontm; 
} 
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<dem(a,n);
	return 0; 
} 
