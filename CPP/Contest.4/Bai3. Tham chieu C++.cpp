#include<iostream> 

using namespace std;

void xuly(int &n) 
{
	n*=28; 
}
int main() 
{
	int n; cin>>n;
	xuly(n);
	cout<<n;
	return 0; 
}
