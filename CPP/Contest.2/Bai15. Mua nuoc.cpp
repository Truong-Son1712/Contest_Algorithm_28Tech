#include<iostream>

using namespace std;

int main() 
{
	long long n, a,b; cin>>n>>a>>b;
	double gia2= (double)b/2;
	if(gia2>a) cout<<n*a;
	else{
		if(n%2==0) cout<<b*n/2;
		else cout<<b*(n-1)/2+a; 
	} 
	return 0; 
}
