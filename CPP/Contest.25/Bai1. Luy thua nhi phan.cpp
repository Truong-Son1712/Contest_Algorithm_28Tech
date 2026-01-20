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
int main() 
{
	long long n,k; cin>>n>>k; 
	cout<<pow(n,k,p);
	return 0; 
}
