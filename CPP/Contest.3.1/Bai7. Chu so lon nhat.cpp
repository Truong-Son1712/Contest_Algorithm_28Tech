#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	int ln=0;
	while(n>0) 
	{
		int du=n%10;
		ln=max(ln,du);
		n/=10; 
	}
	cout<<ln;
	return 0; 
}
