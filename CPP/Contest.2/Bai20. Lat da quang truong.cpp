#include<iostream>

using namespace std;

int main() 
{
	int n,m,a; cin>>n>>m>>a;
	int rong,dai;
	if(n%a==0) rong=n/a;
	else rong=n/a+1;
	if(m%a==0) dai=m/a;
	else dai=m/a+1;
	cout<<(long long) dai*rong;
	return 0; 
}
