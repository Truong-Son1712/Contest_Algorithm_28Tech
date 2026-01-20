#include<iostream>

using namespace std;

long long sum(long long n) 
{
	if(n==0) return 0;
	else return  n%10+sum(n/10); 
}
int main() 
{
	long long n; cin>>n;
	cout<<sum(n);
	return 0; 
}
