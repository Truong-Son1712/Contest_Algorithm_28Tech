#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n; 
	int cuoi=n%10;
	long long du=0;
	while(n>0)
	{
		du=n; 
		n/=10; 
	} 
	cout<<du<<" "<<cuoi;
	return 0; 
}
