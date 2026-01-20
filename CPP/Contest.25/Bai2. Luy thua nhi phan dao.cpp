#include<iostream>

using namespace std;

const int p=1e9+7;
long long pow(long long a,long long b,long long c) 
{
	long long res=1;
	while(b!=0){
		if(b%2==1) res=((res%c)*(a%c))%c;
		a=((a%c)*(a%c))%c;
		b/=2; 
	}
	return res; 
}
long long dao(long long n) 
{
	long long res=0;
	while(n>0) 
	{
		res=res*10+n%10;
		n/=10; 
	}
	return res; 
}
int main() 
{
	long long n; cin>>n; 
	cout<<pow(n,dao(n),p);
	return 0; 
}
