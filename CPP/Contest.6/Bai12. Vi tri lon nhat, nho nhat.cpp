#include <iostream>
#include<math.h> 

using namespace std;
int GTLN(int a[], int n)
{
	int res=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>res) res=a[i];
	return res;	 
}
int GTNN(int a[], int n)
{
	int res=a[0];
	for(int i=0;i<n;i++)
		if(a[i]<res) res=a[i];
	return res; 
 } 
void vitri(int a[],int n)
{
	int max=GTLN(a,n), min=GTNN(a,n); 
	for(int i=n-1;i>=0;i--){
		if(a[i]==min){
		  	cout <<i<<" ";
		  	break; 
		  }
	}
	 for(int i=0;i<n;i++){
	 	if(a[i]==max) {
		 	cout<<i;
			break; 
		 }
	 }
	 	
 } 
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 } 


int main()
{
	int n; cin>>n; int a[n];
	nhap(a,n); 
	vitri(a,n); 
	return 0; 
}
