#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	int n; cin>>n;
	long long sum=1;
	for(int i=1;i<=sqrt(n);i++){
		if(i*i==n) sum*=i;
		else if(n%i==0) sum*=i*n/i; 
	} 
	cout<<sum;
	return 0; 
}
