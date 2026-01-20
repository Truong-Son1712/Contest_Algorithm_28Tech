#include<iostream>
#include<math.h>
 
using namespace std;

long long dem[10] ;
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++) 
		cin>>a[i]; 
}

void demchuso(int a[],int n) 
{	 
	for(int i=0;i<n;i++){
		int num=abs(a[i]) ;
		int du=0;
		if(num==0) dem[0]++; 
		while(num>0){
			du=num%10;
			dem[du]++;
			num=num/10; 
		} 
	}	
}
int main() 
{
	int n; cin>>n;
	int a[n];
	nhap(a,n);
	demchuso(a,n);
	for(int i=0;i<10;i++){
		if(dem[i]!=0) cout<<i<<" "<<dem[i]<<endl;  
	} 
	return 0; 
}

