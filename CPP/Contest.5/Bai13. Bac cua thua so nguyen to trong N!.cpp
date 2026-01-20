#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int p; cin>>p;
	long long x=0; 
	while(n>p){
		x+=(long long)n/p;
		n=n/p; 
	}  
	cout<<x; 
	return 0; 
}
