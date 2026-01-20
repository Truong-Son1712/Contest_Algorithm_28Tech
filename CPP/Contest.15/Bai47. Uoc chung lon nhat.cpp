#include<iostream>
#include<string>

using namespace std;

long long gcd(long long a,long long b) 
{
	while(b!=0){
		long long du=a%b;
		a=b;b=du; 
	} 
	return a; 
}
int main() 
{
	long long a,x,y; cin>>a>>x>>y;
	long long ucln=gcd(x,y);
	for(int i=0;i<ucln;i++)
		cout<<a;
	return 0; 
}
