#include<iostream>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
long long thaotac(int a[],int n) 
{
	long long res=0,d=0; 
	for(int i=1;i<n;i++){
		if(a[i]<=a[i-1]){
			d=a[i-1]-a[i]+1; 
			res+=d; 
			a[i]=a[i]+d;
		}
	} 
	return res; 
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n) ;
	cout<<thaotac(a,n);
	return 0; 
}
