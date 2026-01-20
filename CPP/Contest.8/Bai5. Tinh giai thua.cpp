#include<iostream>

using namespace std;

long long giaithua(int n) 
{
	if(n<=1) return 1;
	else return (long long)n*giaithua(n-1);  
}
int main() 
{
	int n; cin>>n;
	cout<<giaithua(n);
	return 0; 
}
