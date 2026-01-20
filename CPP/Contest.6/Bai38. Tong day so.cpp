#include<iostream>

using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void tong2(int a[], int n)
{
	for(int i=0;i<n-1;i++){
		int sum;
		sum=a[i]+a[i+1];
		cout<<sum<<" "; 
	} 
 } 
void tong3(int a[],int n)
{
	for(int i=0;i<n-2;i++){
		int sum;
		sum=a[i]+a[i+1]+a[i+2];
		cout<<sum<<" "; 
	} 
 } 
 void tong4(int a[], int n)
 {
 	for(int i=0;i<n-3;i++){
 		int sum;
		sum=a[i]+a[i+1]+a[i+2]+a[i+3] ;
		cout<<sum<<" "; 
	 } 
  } 
int main()
{
  	int n; cin>>n;
	int a[n];
	nhap(a,n);
	tong2(a,n);
	cout<<endl;
	tong3(a,n);
	cout<<endl;
	tong4(a,n); 
	 return 0; 
} 
