#include<iostream> 

using namespace std;

long long timkiem(long long n) 
{
	if(n<10) return n;
	else return timkiem(n/10); 
}
int main() 
{
	long long n; cin>>n;
	cout<<timkiem(n);
	return 0; 
}
