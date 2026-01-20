#include<iostream> 

using namespace std;

void nhap(int a[],int n)  
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
void guithu(int a[],int n)    
{
	cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
	for(int i=1;i<n-1;i++){
		cout<<min(a[i]-a[i-1],a[i+1]-a[i])<<" ";
		cout<<max(a[i]-a[0],a[n-1]-a[i])<<endl; 
	} 
	cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]; 
} 
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	guithu(a,n);
	return 0; 
}
