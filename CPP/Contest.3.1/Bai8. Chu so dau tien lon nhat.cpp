#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n; 
	int dau=0,ln=0;
	while(n>0) 
	{
		int du=n%10;
		ln=max(ln,du);
		dau=n;
		n/=10; 
	}
	if(dau==ln) cout<<"YES";
	else cout<<"NO";
	return 0; 
}
