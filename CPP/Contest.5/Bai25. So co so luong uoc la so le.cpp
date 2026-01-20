#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	long long n; cin>>n; 
	long long i=sqrt(n);
	if(i*i==n) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
