#include<iostream>
#include<math.h> 

using namespace std;

int main() 
{
	int n,x; cin>>n>>x;
	if(x>=34) cout<<n;
	else{
		long long p=pow(2,x); 
		cout<<n%p; 
	} 
	return 0; 
}
