#include<iostream>
#include<math.h>

using namespace std;

bool cp(long long n) 
{
	long long a=sqrt(n);
	return a*a==n; 
}
int main() 
{
	long long n; cin>>n;
	int k=1; 
	while(1){
		if(cp(k*n)){
			cout<<k*n;
			break; 
		} 
		k++; 
	} 
	return 0; 
}
