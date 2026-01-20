#include<iostream>
#include<algorithm>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void xuat(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" "; 
}
int main() 
{
	int n;; cin>>n;
	int a[n];
	nhap(a,n);
	sort(a,a+n);
	xuat(a,n);
	return 0; 
}
