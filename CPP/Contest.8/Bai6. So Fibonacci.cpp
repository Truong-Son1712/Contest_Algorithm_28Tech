#include<iostream>

using namespace std;

long long fibonacci(int n) 
{ 
	if(n==1) return 0;
	if(n==2) return 1; 
	else return (long long)fibonacci(n-1)+fibonacci(n-2);  
}
int main() 
{
	int n; cin>>n;
	cout<<fibonacci(n);
	return 0; 
}
