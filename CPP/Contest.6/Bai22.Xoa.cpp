#include <iostream>
#include<math.h> 

using namespace std;

void nhap(int  a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
 }
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" "; 
} 
bool check(int a[], int n,int x)
{
	for(int i=0;i<n;i++)
		if(a[i]==x) return true;
	return false; 
 } 
 void xoa(int a[], int &n, int x)
 {
 	for(int i=x;i<n;i++)
	 	a[i]=a[i+1];
	n--; 
  }
  int vitridautien(int a[], int n,int x)
  {
  	for(int i=0;i<n;i++){
  		if(a[i]==x) return i; 
	  } 
   } 
   void xoavitridautien(int a[], int &n,int x)
   {
   		if(check(a,n,x)){
   			int vitri=vitridautien(a,n,x);
			xoa(a,n,vitri);
			xuat(a,n); 
		   } 
		else cout<< "NOT FOUND" ;
	}

int main()
{
	int n,x; cin>>n>>x; int a[n];
	nhap(a,n);
	xoavitridautien(a,n,x);
	return 0; 
}
