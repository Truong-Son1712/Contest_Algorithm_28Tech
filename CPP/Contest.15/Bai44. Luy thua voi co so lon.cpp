#include<iostream>
#include<string>

using namespace std;

int p=1e9+7; 
long long chiadu(string s,long long m) 
{
	long long mod=0;
	for(int i=0;i<s.size();i++)
		mod=(mod*10+(s[i]-'0'))%m;
	return mod; 
}
long long powmod(long long n,long long k) 
{
	if(k==0) return 1;
	long long x=powmod(n,k/2);
	if(k%2==0) return x*x%p;
	return ((n%p)*(x*x%p))%p; 
}
int main() 
{
	string s;cin>>s;
	long long m; cin>>m;
	cout<<powmod(chiadu(s,p),m) ;
	return 0; 
}
