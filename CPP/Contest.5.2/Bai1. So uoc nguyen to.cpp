#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	int dem=0;
	long long n; cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++;
			while(n%i==0){
				n/=i; 
			} 
		} 
	} 
	if(n>1) dem++; 
	cout<<dem;
	return 0; 
}
