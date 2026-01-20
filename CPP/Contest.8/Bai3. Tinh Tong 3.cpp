#include<iostream>

using namespace std;

long long tong(int n) 
{
	if(n==1) return 1;
	else return (long long)n*n*n+tong(n-1);  
}
int main() 
{
	int n; cin>>n;
	cout<<tong(n);
	return 0; 
}
