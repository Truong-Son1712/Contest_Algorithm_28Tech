#include<iostream>
#include<math.h>
 
using namespace std;

void nhap(int a[],int n) 
{
	for(int i=0;i<n;i++)
		cin>>a[i]; 
}
long long thaotac(int a[],int n,int d) 
{
	long long dem=0,kc=0; 
	for(int i=1;i<n;i++){
		if(a[i]<=a[i-1]){
			kc= ceil((double)(a[i-1]-a[i]+1)/d)*d ;
			dem+= ceil((double)(a[i-1]-a[i]+1)/d);
			a[i]=a[i]+kc; 
		}
	}
	return dem; 
}
int main()  
{
	int n,d; cin>>n>>d;
	int a[n];
	nhap(a,n);
	cout<<thaotac(a,n,d);
	return 0; 
}
