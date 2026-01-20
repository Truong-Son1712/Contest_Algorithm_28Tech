#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	while(n>10){
		long long m=n,sum=0 ;
		while(m>0){
			sum+=m%10;
			m/=10; 
		}
		n=sum; 
	} 
	cout<<n;
	return 0; 
}
