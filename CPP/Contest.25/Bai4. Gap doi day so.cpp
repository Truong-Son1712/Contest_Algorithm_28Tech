#include<iostream>
#include<math.h> 

using namespace std;

int giatri(int n,long long k) 
{
	long long vtg=pow(2,n-1); 
	if(k==vtg) return n;
	else if(k>vtg) return giatri(n-1,k-vtg);
	else return giatri(n-1,k); 
}
int main() 
{
	int n;long long k; cin>>n>>k; 
	cout<<giatri(n,k);
	return 0; 
}
