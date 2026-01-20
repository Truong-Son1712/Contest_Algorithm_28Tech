#include<iostream>

using namespace std;

long long latnguoc(long long n) 
{
	int du=0;
	long long kq=0;
	while(n>0){
		du=n%10;
		kq=kq*10+du;
		n/=10; 
	} 
	return kq; 
}
int main() 
{
	long long n; cin>>n;
	cout<<latnguoc(n);
	return 0; 
}
