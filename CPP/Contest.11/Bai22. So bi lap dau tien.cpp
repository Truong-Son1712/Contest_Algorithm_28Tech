#include<iostream>
 
using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
int timkiem(int a[],int n) 
{
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
			if(a[i]==a[j]) return a[i]; 
	return -1; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	cout<<timkiem(a,n);
	return 0; 
}
 
