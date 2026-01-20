#include<iostream>
#include<math.h> 

using namespace std;

int main() 
{
	int n,m,k; cin>>n>>m>>k;
	long long p=pow(10,k), res=1; 
	for(int i=1;i<=m;i++) 
	{
		res*=n ;
		res%=p ;
	}
	cout<<res;
	return 0; 
}
