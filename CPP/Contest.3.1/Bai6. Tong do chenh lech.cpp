#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int sum=0;
	int du1=0,tmp=n%10; 
	while(n>0){
		du1=n%10;
		sum+=abs(du1-tmp); 
		n/=10;
		tmp=du1; 
	}
	cout<<sum; 
}
