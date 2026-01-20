#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int p=5; 
	long long x=0; 
	while(n>p){
		x+=(long long)n/p;
		n=n/p; 
	}  
	cout<<x; 
	return 0; 
}
