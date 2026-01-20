#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int so=n/3; 
	int sum=(2*3+(so-1)*3)/2*so; 
	cout<<n*(n+1)/2<<endl<<(long long)n*(n+1)*(2*n+1)/6<<endl<<so<<endl<<sum;
	return 0; 
}
