#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int sum=0;
	while(n>0){
		int du=n%10;
		sum+=du;
		n/=10; 
	} 
	cout<<sum;
	return 0; 
}
