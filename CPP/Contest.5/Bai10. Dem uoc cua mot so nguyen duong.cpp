#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
	int k=100; 
	int t; cin>>t;
	long long ans=1; 
	while(t--){
		int p,m; cin>>p>>m; 
		ans*=(m+1);
		ans%=k; 
		}
	cout<<ans; 
	return 0; 
}
