#include<iostream>

using namespace std;

int main() 
{
	int n; cin>>n;
	int gia; 
	if(n>=1000) gia=n*4500+1200000;
	else if(n>=800) gia=n*3900+900000;
	else if(n>=500) gia=n*3700+800000;
	else gia=n*3300; 
	cout<<gia;
	return 0; 
}
