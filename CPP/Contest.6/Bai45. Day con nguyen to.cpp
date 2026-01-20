#include<iostream>

using namespace std;

bool ngto(int n) 
{
	for(int i=2;i<n;i++)
		if(n%i==0) return false;
	return n>1; 
} 
void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
int dem(int a[],int n) 
{
	int count=0;
	for(int i=0;i<n;i++){
		int sum=0; 
		for(int j=i;j<n;j++){
			sum+=a[j];
			if(ngto(sum)) count++; 
		} 
	} 
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
