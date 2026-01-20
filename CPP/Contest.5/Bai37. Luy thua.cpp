#include<iostream>
#include<math.h>

using namespace std;

long long pow(long long a,long long b,long long c)
{
	long long res=1;
	while(b!=0){
		if(b%2==1){
			res=((res%c)*(a%c))%c; 
		} 
		a=((a%c)*(a%c))%c;
		b/=2; 
	}
	return res; 
}
int main() 
{
	long long a,b; cin>>a>>b;
	cout<<pow(a,b,1000000007);
	return 0; 
}
