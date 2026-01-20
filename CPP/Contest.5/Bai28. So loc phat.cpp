#include<iostream>
#include<math.h>

using namespace std;

bool check(long long n) 
{
	while (n>0){
		int du=n%10;
		if(du!=0&&du!=6&&du!=8) return false;
		n/=10; 
	}
	return true; 
}
int main() 
{
	long long n; cin>>n;
	if(check(n)) cout<<1;
	else cout<<0;
	return 0; 
}
