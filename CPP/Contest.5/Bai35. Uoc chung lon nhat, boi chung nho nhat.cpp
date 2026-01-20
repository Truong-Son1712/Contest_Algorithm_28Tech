#include<iostream>
#include<math.h>

using namespace std;

int gcd(int a,int b) 
{
	while(b!=0){
		int du=a%b;
		a=b;
		b=du; 
	} 
	return a; 
}
int lcm(int a,int b) 
{
	return a/gcd(a,b)*b; 
}
int main() 
{
	long long a,b; cin>>a>>b;
	cout<<gcd(a,b)<<" "<<lcm(a,b);
	return 0; 
}
