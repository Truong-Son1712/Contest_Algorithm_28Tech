#include<iostream>
#include<math.h>

using namespace std;

int thuaso(int n,int k)
{
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				dem++;
				if(dem==k) return i;
				n/=i; 
			} 
		} 
	} 
	if(n>1) dem++;
	if(dem==k) return n;
	else return -1; 
}
int main() 
{
	int n,k; cin>>n>>k; 
	cout<<thuaso(n,k);
	return 0; 
}
