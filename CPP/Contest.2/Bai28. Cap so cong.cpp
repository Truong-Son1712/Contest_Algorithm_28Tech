#include<iostream>

using namespace std;

int main() 
{
	int n,u1,d; cin>>n>>u1>>d; 
	long long sum=(2*u1+(long long)d*(n-1))/2*n;
	cout<<sum;
	return 0; 
}
