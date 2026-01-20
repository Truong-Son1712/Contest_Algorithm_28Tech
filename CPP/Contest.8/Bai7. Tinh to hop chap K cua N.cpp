#include<iostream>

using namespace std;

long long nCk(int n, int k) 
{
	if(k==0||n==k) return 1;
	else return nCk(n-1,k)+nCk(n-1,k-1);	
}
int main() 
{
	int n,k ;cin>>n>>k;
	cout<<nCk(n,k);
	return 0; 
}
