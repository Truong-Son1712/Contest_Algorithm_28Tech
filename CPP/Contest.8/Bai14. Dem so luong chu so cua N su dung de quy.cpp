#include<iostream> 

using namespace std;

long long count(long long n) 
{
	if(n<10) return 1;
	else return 1+count(n/10); 
}
int main() 
{
	long long n; cin>>n;
	cout<<count(n);
	return 0; 
}
