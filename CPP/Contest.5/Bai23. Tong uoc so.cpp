#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	long long n; cin>>n;
	long long sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i*i==n) sum+=i;
			else sum+=i+n/i;
		} 
	} 
	cout<<sum;
	return 0; 
}
