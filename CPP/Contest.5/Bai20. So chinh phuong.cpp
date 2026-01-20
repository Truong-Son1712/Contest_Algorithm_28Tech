#include<iostream>
#include<math.h>
 
using namespace std;

int main() 
{
	long long n; cin>>n; 
	long long x=sqrt(n);
	if(x*x==n) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
